#include<stdio.h>
void main ()
{
	int input=0,result=0;
	printf("Printing biggest 4 digit number which is divisible by 7 and 9 :\n");
	for(int i=999;i<=9999;i++)
		{
			if(i%7==0 && i%9==0)
				result = i;
		}
	
	printf("%d\n",result);
}
