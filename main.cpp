#include <iostream>
#include "func.h"
int main(int argc, char const *argv[])
{
	std::cout << "Test git diff" << std::endl;
	std::cout << "Git Test branch" << std::endl;
	std::cout << "Git commit 2" << std::endl;
	std::cout << "Added new commit on master" << std::endl;
	std::cout << "Modification on feature_1 for test" << std::endl;
	std::cout << "Added new commit on master" << std::endl;

	function_1();
	function_2();
	function_3();
	
	
	return 0;
}

void function_1()
{
  std::cout<< "sono qua"<< std::endl;
}
