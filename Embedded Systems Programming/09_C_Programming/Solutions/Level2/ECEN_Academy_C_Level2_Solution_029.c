#include <stdio.h>
int main ()
{
	int x=1,x1,x2,x3;
	printf("Enter three numbers:");
	scanf("%d%d%d",&x1,&x2,&x3);
	while(1)
	{
		if(x%x1 == 0 & x%x2 == 0 & x%x3 == 0)  // Least common divisor or Multiple
		{
			printf("%d",x);
			return 0;
		}
		x++;
	}
}

