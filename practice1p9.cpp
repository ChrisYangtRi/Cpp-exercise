#include <iostream>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int val = 50;
	int sum = 0;
	while( val <= 100 )
	{
		sum += val;
		++ val;
	}
	std::cout << "The sum from 50 to 100 is " << sum;
	getchar();
}
