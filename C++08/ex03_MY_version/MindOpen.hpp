

#ifndef MINDOPEN_HPP
# define MINDOPEN_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <vector>
# include <stack>
# include <exception>

class MindOpen
{
	public:
		MindOpen(char *path);
		~MindOpen(void);

		void	execute();
	private:
		MindOpen(void);
		MindOpen(const MindOpen& _src);

		MindOpen&	operator=(const MindOpen& _src);

		class OpenException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class NotValid : public std::exception
		{
			virtual const char* what() const throw();
		};

		bool	check() const;

		size_t		ptr;
		std::ifstream	fd;
		std::vector<char> src;
		std::vector<unsigned char> stack;
};

#endif
