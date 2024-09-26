#ifndef MUTANT
# define MUTANT

#include <iostream>
#include <stack>
#include <deque>

template < typename T >
class MutantStack: public std::stack<T> {
	public:
		MutantStack<T>(){};
		MutantStack<T>(MutantStack const &ref){
			(void)ref;
		};
		MutantStack &operator=(MutantStack<T> const &ref){
			(void)ref;
		};
		~MutantStack<T>(){};
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){ return this->c.begin(); }
		iterator end(){ return this->c.end(); }
		
		

};


#endif