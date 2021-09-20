。 # include <stdio.h>	 
 

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0; //C语言规定，变量要定义在当前代码块最前面 
	scanf("%d%d,\n",&num1,&num2);//输入数据用输入函数scanf，取地址符号&
	sum = num1 + num2;
	printf("sum = %d\n",sum);
	 
	return 0; 
 } 
