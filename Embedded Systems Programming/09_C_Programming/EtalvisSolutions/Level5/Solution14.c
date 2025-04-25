#include<stdio.h>
#include<math.h>
void main ()
{
	int x,n,input,result=0,output;
	printf("Enter a number as input : ");
	scanf("%d",&input);
	for(int x=input;x>0;x=x/10)
	{	

		result++;
		
	}
	n = pow(10,result-1);
	//printf("%d\n",n);
	x = input%n;
	//printf("%d\n",x);
	x = x/10;
	//printf("%d\n",x);
	output= (input%10)*n+x*10+input/n;
	//printf("%d\n",input/n);
	printf("Output = %d\n",output);
}


