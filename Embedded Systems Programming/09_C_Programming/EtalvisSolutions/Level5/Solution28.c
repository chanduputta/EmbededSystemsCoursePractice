#include<stdio.h>
void main ()
{
	int input,input1,input2,result=0;
	printf("Get two numbers from user and print the LCM of those numbers\n\n");
	printf(" Input two numbers: ");
	scanf("%d%d",&input1,&input2);
	input = input1>=input2 ? input1 : input2;
	for(int i=1;1;i++)
	{
		if(i%input1 == 0 && i%input2 == 0)
		{
			result = i;
			printf("%d\n",result);
			break;
		}
	}
}



