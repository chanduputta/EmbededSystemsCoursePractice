#include<stdio.h>
int disp_reverse_number(int);
int main ()
{
	int x,y;
	printf("Enter a multiDigit integer to print reverse of that number : "); 
	scanf("%d",&x);
	y = disp_reverse_number(x);
	printf("%d\n",y);
}
int disp_reverse_number(int a)
{
	int rev=0;
	for(int i=a;i>0;i=i/10)
	{
		int y = i%10;
		rev = rev*10 + y;
	}
	return (rev);
}


