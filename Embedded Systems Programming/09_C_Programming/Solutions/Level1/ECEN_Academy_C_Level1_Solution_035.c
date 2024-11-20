#include<stdio.h>
int main ()
{
	int x1,x2,y;
	printf("Enter First 3 digit Number:");
	scanf("%d",&x1);
	printf("Enter Second 3 digit Number:");
	scanf("%d",&x2);
	int x11,x12,x13,x21,x22,x23;
	x11 = x1/100;
	x12 = x1%10;
	x13 = x11+x12;
	x21 = x2/100;
	x22 = x2%10;
	x23 = x21+x22;
	int z,z1,z2,z3,z4;
	z = (x13>x23)? x1:x2;
	z1 = z/10;
	z2 = z%10;
	z3 = z1%10;
	z4 = z1/10;
	y = z2+z3+z4;
	printf("Result = %d",y);
}
