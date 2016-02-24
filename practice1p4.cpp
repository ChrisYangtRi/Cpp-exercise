#include <iostream>
#include <stdio.h>
int main()
{
	int v1 = 0;
	int v2 = 0;
	
	std::cout << " Enter two numbers " ；
	std::cout << std::endl;	
	std:: cin >> v1 >> v2;
	std::cout << " The result of v1 * v2 is "; 
	std::cout << v1 * v2; 
	std::cout << std::endl;
	getchar();
	return 0;
}