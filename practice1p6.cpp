Explain whether the following program fragment is legal.

std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;

If the program is legal, what does it do? If the program is not legal, why
not? How would you fix it?

//The program is not legal cuz :
//1.It doesn't use the endl to clean the buffer and
// it might cause some erros when you run this program.
//2. It doesn't use cout in the second and third line 
// but the operator must have a object on it's left.
//3. There is no header .
//4. v1 and v2 do not have a value .These two characters have not been defined

IMPROVE
#include <iostream>
#include <stdio.h>
int main()
{
	int v1 = 2;
	int v2 = 3; 
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	return 0;
	getchar();
}