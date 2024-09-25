#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
#include <array>
#include "easyfind.hpp"

int main(int, char**)
{
	std::vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);

	easyfind(vect, 20);
    easyfind(vect, 40);

	std::list<int> list;

    list.push_back(10);
    list.push_back(20);
    list.push_back(30);

	easyfind(list, 10);
    easyfind(list, 60);

    std::array<int, 3> array;

    array[0] = (-5);
    array[1] = (0);
    array[2] = (30000);

	easyfind(array, -5);
    easyfind(array, 234635);
}