

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <set>
# include <algorithm>
# include <cmath>

class Span
{
	public:
		Span(unsigned int _N);
		Span(const Span& src);
		~Span(void);

		class IsFullException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class TooFewNumber : public std::exception
		{
			virtual const char* what() const throw();
		};

		Span&	operator=(const Span& src);

		void	addNumber(int _num);

		template <typename InputIterator>
		void	addNumber(InputIterator start, InputIterator end);

		size_t	shortestSpan(void) const;
		size_t	longestSpan(void) const;
	private:
		Span(void);

		size_t	sz;
		std::multiset<int>	store;
};

template <typename InputIterator>
void	Span::addNumber(InputIterator start, InputIterator end)
{
	if (store.size() + std::distance(start, end) > sz)
		throw Span::IsFullException();
	store.insert(start, end);
}

#endif
