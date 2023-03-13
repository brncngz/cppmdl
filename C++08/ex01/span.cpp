

#include "span.hpp"


Span::Span(void) {}

Span::Span(unsigned int _N) :
	sz(_N)
{
	this->store.clear();
	srand(time(0));
}

Span::Span(const Span& src) :
	sz(src.sz)
{
	this->store.clear();
	store = src.store;
}

Span::~Span(void)
{
	this->store.clear();
}

Span&	Span::operator=(const Span& src)
{
	sz = src.sz;
	this->store.clear();
	store = src.store;

	return *this;
}

void	Span::addNumber(int _num)
{
	if (this->store.size() == sz)
		throw Span::IsFullException();
	this->store.insert(_num);
}

size_t	Span::shortestSpan(void) const
{
	if (this->store.size() <= 1 || sz <= 1)
		throw Span::TooFewNumber();
	std::multiset<int>::iterator prev = this->store.begin();
	std::multiset<int>::iterator next = ++this->store.begin();
	size_t min = std::abs(*next++ - *prev++);
	while (next != this->store.end())
	{
		size_t diff = std::abs(*next - *prev);
		if (diff < min)
			min = diff;
		prev++;
		next++;
	}
	return min;
}

size_t	Span::longestSpan(void) const
{
	if (this->store.size() <= 1 || sz <= 1)
		throw Span::TooFewNumber();
	int	min = *std::min_element(this->store.begin(), this->store.end());
	int max = *std::max_element(this->store.begin(), this->store.end());

	return (std::abs(max - min));
}

const char* Span::IsFullException::what() const throw()
{
	return "Can't add a new element, container is full";
}

const char* Span::TooFewNumber::what() const throw()
{
	return "There are too few elements for this operation";
}
