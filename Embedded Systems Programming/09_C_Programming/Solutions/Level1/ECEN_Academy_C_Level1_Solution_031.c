#include <stdio.h>
int main()
{
	int x,x1,x2,x3,x4,y;
	printf("Enter 3 digit Number:");
	scanf("%d",&x);
	x1 = x/10;
	x2 = x1/10;
	x3 = x1%10;
	x4 = x%10;
	y = x2+x3+x4;
	if(y < 10)
		printf("%d",y);
	else
	{	int y1,y2,z;
		y1 = y/10;
		y2 = y%10;
		z = y1+y2;
		if(z < 10)
			printf("%d",z);
		else
		{	int z1, z2,q;
			z1 = z/10;
			z2 = z%10;
			q = z1+z2;
			printf("%d",q);
		}
	}
}
