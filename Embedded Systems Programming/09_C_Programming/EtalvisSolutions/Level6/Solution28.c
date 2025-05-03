#include<stdio.h>
void main()
{
	printf("Print the LCM of two numbers\n\n");
	int x=0,input1,input2,result=0;
	printf("Input two numbers : ");
	scanf("%d %d",&input1,&input2);
	
	while(1)
	{
		x++;
		if(x%input1 == 0 && x%input2 == 0)
		{
			result = x;
			printf("%d\n",result);
			break;
		}
	}
}
