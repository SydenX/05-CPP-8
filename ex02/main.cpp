#include "MutantStack.hpp"
#include <list>
#include <vector>

int main(){

	//MY TEST
	
	MutantStack<int> stack;
	stack.push(1);
	stack.push(2);

	for(MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
	//TEST WITH MUTANT STACK
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl << std::endl;
	std::stack<int> s(mstack);

	//TEST WITH LIST
	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);
	std::list<int>::iterator lit = lstack.begin();
	std::list<int>::iterator lite = lstack.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << " ";
		++lit;
	}
	std::cout << std::endl << std::endl;

	//TEST WITH VECTOR
	std::vector<int> vstack;
	vstack.push_back(5);
	vstack.push_back(17);
	std::cout << vstack.back() << std::endl;
	vstack.pop_back();
	std::cout << vstack.size() << std::endl;
	vstack.push_back(3);
	vstack.push_back(5);
	vstack.push_back(737);
	vstack.push_back(0);
	for(unsigned int i = 0; i < vstack.size(); i++){
		std::cout << vstack[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}