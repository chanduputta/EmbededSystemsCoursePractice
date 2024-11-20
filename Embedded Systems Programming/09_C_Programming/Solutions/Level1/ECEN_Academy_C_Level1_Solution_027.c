#include<stdio.h>
int main()
{
	int x,x1,x2,x3,x4,y;
	printf("Enter 3 digit Number:");
	scanf("%d",&x);
	x1 = x%10; // 1s place
//	printf("%d\n",x1);
	x2 = x/10;
//	printf("%d\n",x2);
	x3 = x2%10; // 10s place
//	printf("%d\n",x3);
	x4 = x2/10; // 100s place
//	printf("%d\n",x4);
	y = x1+x3+x4;
//	printf("%d\n",y);
	if ( y == 10)
		printf("Success");
	else
		printf("Failure");
}
