#include "span.hpp"

Span::Span(unsigned int n): _n(n), _list(n){}
Span::~Span(){}

Span::Span(Span const &ref){

}

Span &Span::operator=(Span const &ref){
	return *this;
}

void Span::addNumber(int n){

}

unsigned int Span::shortestSpan() const {
	return 0;
}

unsigned int Span::longestSpan() const {
	return 1;
}
