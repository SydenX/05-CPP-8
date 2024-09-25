#include "span.hpp"

Span::Span(unsigned int n): _n(n){}
Span::~Span(){}

Span::Span(Span const &ref){
	this->_n = ref._n;
	this->_list = ref._list;
}

Span &Span::operator=(Span const &ref){
	if(&ref != this){
		this->_n = ref._n;
		this->_list = ref._list;
	}
	return *this;
}

void Span::addNumber(int n){
	if (this->_list.size() == this->_n)
		throw (Span::ListAlreadyFull());
	this->_list.push_back(n);
	sort(this->_list.begin(), this->_list.end()); 
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	if (this->_list.size() + std::distance(begin, end) > this->_n)
		throw (Span::ListWillBeFull());
	this->_list.insert(this->_list.end(), begin, end);
}

unsigned int Span::shortestSpan() const {
	if (this->_list.size() <= 1)
		throw (Span::DistanceNotFound());
	int diff = INT_MAX;
	for(unsigned int i = 1; i < this->_list.size(); i++){
		if (abs(this->_list[i] - this->_list[i - 1]) < diff)
			diff = abs(this->_list[i] - this->_list[i - 1]);
	}
	return diff;
}

unsigned int Span::longestSpan() const {
	if (this->_list.size() <= 1)
		throw (Span::DistanceNotFound());
	int min = INT_MAX;
	int max = INT_MIN;
	for(unsigned int i = 0; i < this->_list.size(); i++){
		if (this->_list[i] < min)
			min = this->_list[i];
		if (this->_list[i] > max)
			max = this->_list[i];
	}
	return abs(max - min);
}

const char *Span::ListAlreadyFull::what(void) const throw (){
	return ("The list is Already Full Exception.");
}

const char *Span::DistanceNotFound::what(void) const throw (){
	return ("Cannot find distance between points Exception.");
}

const char *Span::ListWillBeFull::what(void) const throw (){
	return ("Cannot add this range, the list is not big enough Exception.");
}

