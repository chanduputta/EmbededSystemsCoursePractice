#include<stdio.h>
int main()
{
	int x,x1,xn,input,tens=1,count=0,result=0;
	printf("Program to get a number from user and if the last digit of the number is even print the same number. if the last digit of number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit -MSB) \n\n");
	printf("Enter a number: ");
	scanf("%d",&input);
	x = input;
	//x1 = x%10;
	//printf("%d\n",xn);
	while(x>10)
	{
		tens=tens*10;
		x=x/10;
		count++;
	}
	//printf("%d count\n",count);
	//printf("%d tens\n",tens);
	xn=input/tens;
	//printf("%d xn\n",xn);
	if(xn%2 != 0)
		xn = xn-1;

	x=input%tens;
	//printf("%d x\n",x);
	//x=x/10;
	//printf("%d\n",x);
	result=xn*tens+x;
	printf("%d result\n",result);
}



