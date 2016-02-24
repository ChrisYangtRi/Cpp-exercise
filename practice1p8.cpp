//Exercise 1.8: Indicate which, if any, of the following output statements are
//legal:

//std::cout << "/*"; 可以的
//std::cout << "*/"; 也可以
//std::cout << /* "*/" */; 不行 
//std::cout << /*  "*/" /* "/*"  */; 不行 nonono这个是可以的 遇到""的其
//中一个后好像先找到了后面的一个然后再是注释so可以用
//After you’ve predicted what will happen, test your 


#include <iostream>
#include <stdio.h>
int main()
{
	std::cout << /*  "*/" /* "/*"  */;
	getchar();
	return 0;

}
