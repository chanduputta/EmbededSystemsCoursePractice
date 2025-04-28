#include<stdio.h>
int main()
{
	int x,x1,xn,input,tens=1,count=0,result=0;
	printf("Program to get a number from user and print the reverse of that number\n\n");
	printf("Enter a number: ");
	scanf("%d",&input);
	x = input;
	xn = x%10;
	//printf("%d\n",xn);
	while(x>10)
	{
		tens=tens*10;
		x=x/10;
		count++;
	}
	//printf("%d\n",count);
	//printf("%d\n",tens);
	x1=input/tens;
	//printf("%d\n",x1);
	x=input%tens;
	//printf("%d\n",x);
	x=x/10;
	//printf("%d\n",x);
	result=xn*tens+x*10+x1;
	printf("%d\n",result);
}



