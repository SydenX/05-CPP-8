#ifndef EASYFIND
# define EASYFIND

#include <map>
#include <iostream>

template < typename T >
void easyfind(T const &container, int const &i){
	for(unsigned long ic = 0; ic < container.size(); ic++) {
		if (container[ic] == i){
			std::cout << i << " found!" << std::endl;
			return ;
		}
	}
	std::cout << i << " not found!" << std::endl;
}


#endif