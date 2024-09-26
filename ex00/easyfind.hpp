#ifndef EASYFIND
# define EASYFIND

#include <map>
#include <iostream>

template < typename T >
void easyfind(T const &container, int const &i){
	if(std::find(container.begin(), container.end(), i) != container.end()){
		std::cout << i << " found!" << std::endl;
	} else {
		std::cout << i << " not found!" << std::endl;	
	}
}


#endif