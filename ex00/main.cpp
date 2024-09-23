#include <iostream>
#include <cstdlib>
#include <vector>
#include "easyfind.hpp"

int main(int, char**)
{
	std::vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);

	easyfind(vect, 20);
}