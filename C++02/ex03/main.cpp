

#include "Fixed.hpp"

bool	check(std::string av)
{
	size_t		size;

	size = av.find_first_not_of("0123456789.()+-*/");
	if (size == std::string::npos)
		return (false);
	return (true);
}

std::string	mult(Fixed left, Fixed right)
{
	std::stringstream	ss;
	Fixed res;

	res = left * right;
	ss << res.toFloat();
	return (ss.str());
}

std::string	divid(Fixed left, Fixed right)
{
	std::stringstream	ss;
	Fixed res;

	res = left / right;
	ss << res.toFloat();
	return (ss.str());
}

std::string	sub(Fixed left, Fixed right)
{
	std::stringstream	ss;
	Fixed res;

	res = left - right;
	ss << res.toFloat();
	return (ss.str());
}

std::string	sum(Fixed left, Fixed right)
{
	std::stringstream	ss;
	Fixed res;

	res = left + right;
	ss << res.toFloat();
	return (ss.str());
}

std::string	find_right(std::string expr, size_t op)
{
	std::string ret;
	size_t		sup;

	sup = expr.find_first_of("-+*/", op + 1);
	if (sup == std::string::npos)
		sup = expr.length();
	ret = expr.substr(op + 1, sup - op - 1);
	return (ret);
}

std::string	find_left(std::string expr, size_t op)
{
	std::string ret;
	size_t		inf;

	inf = expr.find_last_of("-+*/", op - 1);
	if (inf == std::string::npos)
		inf = 0;
	ret = expr.substr((inf == 0) ? inf : inf + 1, op - inf - 1);
	return (ret);
}

void	priority_solve(std::string&	expr)
{
	std::string	res;
	std::string	left;
	std::string	right;
	size_t	op = 0;
	size_t	inf;
	size_t	sup;

	while ((op = expr.find_first_not_of(" 0123456789.+-")) != std::string::npos)
	{
		right = find_right(expr, op);
		left = find_left(expr, op);
		if (expr.at(op) == '*')
			res = mult(std::stof(left), std::stof(right));
		else if (expr.at(op) == '/')
			res = divid(std::stof(left), std::stof(right));
		inf = expr.find_last_of("-+*/", op - 1);
		if (inf == std::string::npos)
			inf = 0;
		sup = expr.find_first_of("-+*/", op + 1);
		if (sup == std::string::npos)
			sup = expr.length();
		if (inf == 0 && sup == expr.length())
			expr.replace(0, std::string::npos, res);
		expr.replace((inf == 0) ? inf : inf + 1, sup - inf - 1, res);
	}
	while ((op = expr.find_first_not_of(" 0123456789.")) != std::string::npos)
	{
		right = find_right(expr, op);
		left = find_left(expr, op);
		if (expr.at(op) == '+')
			res = sum(std::stof(left), std::stof(right));
		else if (expr.at(op) == '-')
			res = sub(std::stof(left), std::stof(right));
		inf = expr.find_last_of("-+", op - 1);
		if (inf == std::string::npos)
			inf = 0;
		sup = expr.find_first_of("-+*/", op + 1);
		if (sup == std::string::npos)
			sup = expr.length();
		if (inf == 0 && sup == expr.length())
			expr.replace(0, std::string::npos, res);
		expr.replace((inf == 0) ? inf : inf + 1, sup - inf - 1, res);
	}
}

bool	my_lexer(std::string expr)
{
	std::string				subexpr;
	bool					token = false;
	size_t					open = 0;
	size_t					close = 0;

	while (open != std::string::npos)
	{
		open = expr.find_first_of("(");
		if (open != std::string::npos)
			token = true;
		if (token)
		{
			close = expr.find_first_of(")", open);
			if (close == std::string::npos)
			{
				std::cout << "Error, some open bracket doesn't match with a closing one" << std::endl;
				return (true);
			}
			subexpr = expr.substr(open + 1, close - open - 1);
			priority_solve(subexpr);
			expr.replace(open, close - open + 1, subexpr);
			token = false;
		}
	}
	priority_solve(expr);
	std::cout << "Expression -> " << expr << std::endl;
	return (false);
}

int		main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "No expr to evaluate, bye" << std::endl;
		return (0);
	}
	else if (ac > 2)
	{
		std::cout << "Too many arguments, cannot evaluate" << std::endl;
		return (1);
	}
	else if (!check(av[1]))
	{
		std::cout << "Invalid Expression, cannot evaluate" << std::endl;
		return (1);
	}
	if (!my_lexer(av[1]))
		return (1);
	return (0);
}
