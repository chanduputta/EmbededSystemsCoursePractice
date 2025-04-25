#include<stdio.h>
void main ()
{
	int input,input1,input2,result=0;
	printf("Get two numbers from user and print the HCF of those numbers\n\n");
	printf(" Input two numbers: ");
	scanf("%d%d",&input1,&input2);
	input= input1<input2?input1:input2;
	for(int i=1;i<=input;i++)
	{
		if(input1%i == 0 && input2%i == 0)
		{
			result = i;
		}
	}
			printf("%d\n",result);
}



