#include <stdio.h>

int a = 100;//全局变量 
int main()
{
	//局部变量和全局变量的名字建议不要相同，容易误会产生bug，
	//当局部变量和全局变量的名字相同的时候，局部变量优先 
	int a = 10;//局部变量 
	printf("%d\n",a);
	return 0; 
 } 
