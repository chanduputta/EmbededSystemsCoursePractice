#include<stdio.h>
void main ()
{
	int x,input,result=0;
	
	printf("Enter a number as input : ");
	scanf("%d",&input);
	//printf("%d\n",input);
	for(x=input;x>0;x=x/10)
	{
		result++;
		
	}
		printf("Output = %d\n",result);
}


