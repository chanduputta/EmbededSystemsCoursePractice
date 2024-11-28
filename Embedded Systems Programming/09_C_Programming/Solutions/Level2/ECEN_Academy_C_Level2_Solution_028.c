#include <stdio.h>
int main ()
{
	int x=1,x1,x2;
	printf("Enter two numbers:");
	scanf("%d%d",&x1,&x2);
	while(1)
	{
		if(x%x1 == 0 & x%x2 == 0)  // Least common divisor or Multiple
		{
			printf("%d",x);
			return 0;
		}
		x++;
	}
}

