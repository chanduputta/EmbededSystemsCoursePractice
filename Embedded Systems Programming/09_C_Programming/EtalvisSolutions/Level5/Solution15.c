#include<stdio.h>
#include<math.h>
void main ()
{
	int x=0,n=0,input=0,result=0,output=0;
	printf("Enter a number as input : ");
	scanf("%d",&input);
//	printf("%d\n",input); 
	n = input%10;
//	printf("lsb %d\n",n);
	if(n%2 != 0)
	{
		for(int x=input;x>0;x=x/10)
		{
			result++;
		}
		n = pow(10,result-1);
//		printf("%d\n",n);
		x = input/n;
//		printf("msb %d\n",x);
		x = x-1;
//		printf("%d\n",x);
		output= x*n+input%n;
//		printf("%d\n",input/n);
		printf("Output = %d\n",output);
	}
	else
	{
		printf("%d\n",input);
	}

}



