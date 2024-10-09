#ifndef MUTANT
# define MUTANT

#include <iostream>
#include <stack>

template < typename T >
class MutantStack: public std::stack<T> {
	public:
		MutantStack<T>(){};
		MutantStack<T>(MutantStack const &ref){
			*this = ref;
		};
		MutantStack &operator=(MutantStack<T> const &ref){
			this->c = ref.c;
		};
		~MutantStack<T>(){
			this->c.clear();
		};
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){ return this->c.begin(); }
		iterator end(){ return this->c.end(); }

};


#endif