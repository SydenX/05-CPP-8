#ifndef SPAN
# define SPAN

#include <iostream>
#include <vector>
#include <limits.h>
#include <set>

class Span {
	private:
		unsigned int _n;
		std::vector<int> _list;
		Span();
	public:
		Span(unsigned int n);
		Span(Span const &ref);
		Span &operator=(Span const &ref);
		~Span();
		void addNumber(int n);
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		class ListAlreadyFull : public std::exception {
			public:
				const char *what() const throw();
		};
		class DistanceNotFound : public std::exception {
			public:
				const char *what() const throw();
		};
		class ListWillBeFull : public std::exception {
			public:
				const char *what() const throw();
		};
};


#endif