#include<stdio.h>
#include<stdlib.h>
int x=0,y=1,answer;

void demo(void);//the function prototype

int main()//the main function
{
	printf("before call demo:x=%d,y=%d\n",x,y);
	demo();
	printf("after call demo:x=%d,y=%d\n",x,y);
	system("pause");
	return 0;
}

void demo(void)//the add function,function definition
{
	int x=100,y=101;
	printf("within demo:x=%d,y=%d\n",x,y);
}
