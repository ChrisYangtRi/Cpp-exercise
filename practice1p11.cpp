#include <iostream>
#include <conio.h>

int main()
{
	int small;
	int big;
	
	std::cout << "Please input two numbers" << std::endl;
	std::cin >> small >> big;
	
	while (small < big-1)
		{
			++small;
			std::cout << small << std::endl;			
		}
	
	while(small-1 > big)
		{
			++big;
			std::cout << big << std::endl;			
		}
 	
 	getch();
 	
 	return 0; 	 
}