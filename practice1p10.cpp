#include <iostream>
#include <conio.h>

int main()
{
	int i = 10;

	while ( i >= 0)
	{	
		std::cout << i << std::endl;
		-- i;
	}
	
	getch();
	
	return 0;
}