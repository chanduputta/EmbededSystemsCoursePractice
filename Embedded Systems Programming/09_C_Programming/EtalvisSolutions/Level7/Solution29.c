#include<stdio.h>
void disp_LCM3(int,int,int);
int main ()
{
	int x,y,z;
	printf("Enter three numbers to find there LCM: ");
	scanf("%d %d %d",&x,&y,&z);
	disp_LCM3(x,y,z);
}

void disp_LCM3(int x,int y,int z)
{
	int result = 0; 
	for (int i = (x*y*z); i>=1; i--)
		if(i%x == 0 && i%y == 0 && i%z == 0)
		{
			result = i;
		}
	printf("result = %d\n",result);
}


