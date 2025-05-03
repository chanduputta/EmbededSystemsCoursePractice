#include<stdio.h>
void main()
{
	printf("Print the HCF of two numbers\n\n");
	int x=0,input,input1,input2,result=0;
	printf("Input two numbers : ");
	scanf("%d %d",&input1,&input2);
	input = input1<input2?input1:input2;
	while(x<input)
	{
		x++;
		if(input1%x == 0 && input2%x == 0)
		{
			result = x;
		}
	}
			printf("%d\n",result);
}
