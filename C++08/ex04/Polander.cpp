

#include "Polander.hpp"

Polander::Polander(void)	{}

Polander::Polander(char* _data)
{
	this->input = _data;
	if (!this->is_valid())
		throw Polander::InvalidExpression();
	this->tokenize();
	this->show_token();
	this->Polanderize();
	this->show_poland();
	this->do_math();
}

Polander::Polander(const Polander& src)
{
	(void)src;
}

Polander::~Polander()
{
	this->input.clear();
	this->pol_list.clear();
	this->tk_list.clear();
}

Polander&	Polander::operator=(const Polander& src)
{
	(void)src;
	return *this;
}

bool	Polander::is_valid(void)
{
	if (input.find_first_not_of("0123456789()+-*/ ") != std::string::npos)
		return false;
	if (std::count(input.begin(), input.end(), '(') - std::count(input.begin(), input.end(), ')') != 0)
		return false;
	return true;
}

void	Polander::tokenize(void)
{
	std::stringstream ss;
	size_t len = this->input.length();
	for (size_t i = 0; i < len; i++)
	{
		if (input[i] == ' ')
			continue;
		else if (std::isdigit(input[i]))
		{
			while (std::isdigit(input[i]))
				ss << input[i++];
			int num;
			ss >> num;
			if (ss.fail())
				throw Polander::InvalidNumber();
			tk_list.push_back(new Number(num));
			ss.str(std::string());
			ss.clear();
		}
		else if (input[i] == '(')
			tk_list.push_back(new Openbra());
		else if (input[i] == ')')
			tk_list.push_back(new Closedbra());
		else if (input[i] == '+' || input[i]  == '-' || input[i] ==  '*' || input[i] == '/')
			tk_list.push_back(new Operator(input[i]));
	}
}

void		Polander::show_token(void)
{
	std::deque<Token*>::iterator start = tk_list.begin();
	std::deque<Token*>::iterator end = tk_list.end();

	std::cout << "Tokens: ";
	for (; start != end; start++)
	{
		(*start)->print();
		std::cout << " ";
	}
	std::cout << std::endl;
}

void	Polander::show_poland(void)
{
	std::deque<Token*>::iterator start = pol_list.begin();
	std::deque<Token*>::iterator end = pol_list.end();

	std::cout << "Postfix: ";
	for (; start != end; start++)
	{
		(*start)->print();
		std::cout << " ";
	}
	std::cout << std::endl;
}

void	Polander::Polanderize(void)
{
	std::stack<Token*>	operation_stack;
	std::deque<Token*>::iterator start  = tk_list.begin();
	std::deque<Token*>::iterator end = tk_list.end();

	for(; start != end; start++)
	{
		if ((*start)->getType() == 1)
		pol_list.push_back(*start);
		else if (((*start)->getType() == 2) || ((*start)->getType() == 3))
			operation_stack.push(*start);
		else if ((*start)->getType() == 4)
		{
			while (!operation_stack.empty())
			{
				if (operation_stack.top()->getType() == 3)
				{
					operation_stack.pop();
					break;
				}
				pol_list.push_back(operation_stack.top());
				operation_stack.pop();
			}
		}
	}
	while (!operation_stack.empty())
	{
		pol_list.push_back(operation_stack.top());
		operation_stack.pop();
	}
}

void	Polander::do_math(void)
{
	int	left;
	int right;
	std::deque<int>	stack;
	std::deque<Token*>::iterator start = pol_list.begin();
	std::deque<Token*>::iterator end = pol_list.end();

	for (; start != end; start++)
	{
		if ((*start)->getType() == 1)
		{
			stack.push_front(static_cast<Number*>(*start)->getValue());
			std::cout << "I ";
			(*start)->print();
			std::cout << " | OP PUSH\t";
			::print_stack(stack);
		}
		else if ((*start)->getType() == 2)
		{
			if (stack.size() < 2)
				throw Polander::InvalidExpression();
			right = stack.front();
			stack.pop_front();
			left = stack.front();
			stack.pop_front();
			std::cout << "I ";
			(*start)->print();
			std::cout << " | OP " << static_cast<Operator*>(*start)->print_operation() << "\t";
			stack.push_front(operate(left, right, static_cast<Operator*>(*start)->print_operation()));
			::print_stack(stack);
		}
	}
	if (stack.size() != 1)
		throw Polander::InvalidExpression();
	std::cout << "Result : " << stack.back() << std::endl;
	stack.pop_back();
}

const char* Polander::InvalidExpression::what() const throw()
{
	return "Error: Invalid Expression";
}

const char* Polander::InvalidNumber::what() const throw()
{
	return "Error: Invalid Number";
}

void		print_stack(std::deque<int>& stack)
{
	std::deque<int>::iterator	start = stack.begin();
	std::deque<int>::iterator	end = stack.end();

	std::cout << "| ST	";
	for (; start != end; start++)
	{
		std::cout << *start << " ";
	}
	std::cout << "\b]" << std::endl;
}

int		operate(int left, int right, std::string str)
{
	if (str == "Add")
		return (left + right);
	else if (str == "Substract")
		return (left - right);
	else if (str == "Multiply")
		return (left * right);
	else if (right == 0)
		throw Polander::InvalidNumber();
	else
		return (left / right);
}
