#include<stdio.h>
void disp_HCF2(int,int);
int main ()
{
	int x,y;
	printf("Enter two numbers to find there HCF: ");
	scanf("%d %d",&x,&y);
	disp_HCF2(x,y);
}

void disp_HCF2(int x,int y)
{
	int result = 0; 
	int i=x<y?x:y;
	for (int i = (x*y); i>=1; i--)
		if(x%i == 0 && y%i == 0)
		{
			result = i;
			break;
		}
	printf("result = %d\n",result);
}


