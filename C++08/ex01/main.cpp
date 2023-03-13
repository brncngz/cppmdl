

#include "span.hpp"
#include <vector>
#include <iostream>
#include <string>

void	showSpan(std::string const &str, Span& span)
{
	std::cout << str;
	std::cout << "shortest span : " << span.shortestSpan() << std::endl;
	std::cout << "longest span : " << span.longestSpan() << std::endl;
}

int		main(void)
{

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	showSpan("5 elements span : \n", sp);
	Span cp(sp);
	showSpan("Copied span : \n", cp);

	Span sp_50(50);
	for (int i = 0; i < 50; i++)
		sp_50.addNumber(i);
	showSpan("50 elements span : \n", sp_50);
	Span cp_op = sp_50;
	showSpan("50 elements span : \n", sp_50);

	try
	{
		sp_50.addNumber(rand());
		sp_50.addNumber(rand());
		sp_50.addNumber(rand());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Span Huge(15000);
	for (int i = 0; i < 15000; i++)
		Huge.addNumber(rand());

	showSpan("Huge span : \n", Huge);


}
