#ifndef SPAN
# define SPAN

#include <iostream>
#include <vector>

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
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
};


#endif