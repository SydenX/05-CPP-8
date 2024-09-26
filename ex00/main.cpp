#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main(int, char**)
{
    std::cout << std::endl;
	std::vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);

	easyfind(vect, 20);
    easyfind(vect, 40);

    std::cout << std::endl;
	std::list<int> list;

    list.push_back(10);
    list.push_back(20);
    list.push_back(30);

	easyfind(list, 10);
    easyfind(list, 60);

    std::cout << std::endl;
    std::deque<int> deque;

    deque.push_back(-1);
    deque.push_back(0);
    deque.push_back(1);

	easyfind(deque, 0);
    easyfind(deque, 2);
}