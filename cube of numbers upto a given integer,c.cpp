#include <stdio.h>
int main(int argc, char** argv)
{
	int num=5,cube;
	for(num=1;num<6;num++)
	{
		cube=(num*num*num);
		printf("number is: %d and cube of that number %d is :%d\n",num,num,cube);
	}
	
	return 0;
}