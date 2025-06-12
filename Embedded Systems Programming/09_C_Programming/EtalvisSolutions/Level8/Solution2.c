#include<stdio.h>
int disp_rsum(int);
int main ()
{
	int x,y;
	printf("written program to print sum of 6 to 1\n"); 
	//scanf("%d",&x);
	y = disp_rsum(6);
	printf("%d\n",y);
}
int disp_rsum(int a)
{
	int y=0;
	for(int i=a; i>0;i--)
	{
		y =y+i;
	}
	return (y);
}
	
