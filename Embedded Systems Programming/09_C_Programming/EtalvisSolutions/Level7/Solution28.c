#include<stdio.h>
void disp_LCM2(int,int);
int main ()
{
	int x,y;
	printf("Enter two numbers to find there LCM: ");
	scanf("%d %d",&x,&y);
	disp_LCM2(x,y);
}

void disp_LCM2(int x,int y)
{
	int result = 0;
	for (int i = (x*y); i>=1; i--)
		if(i%x == 0 && i%y == 0)
		{
			result = i;
		}
	printf("result = %d\n",result);
}


