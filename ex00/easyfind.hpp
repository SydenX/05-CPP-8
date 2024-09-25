#ifndef EASYFIND
# define EASYFIND

#include <map>
#include <iostream>

template < typename T >
void easyfind(T const &container, int const &i){
	for(typename T::const_iterator it = container.begin(); it != container.end(); ++it) {
		if (*it == i){
			std::cout << i << " found!" << std::endl;
			return ;
		}
	}
	std::cout << i << " not found!" << std::endl;
}


#endif