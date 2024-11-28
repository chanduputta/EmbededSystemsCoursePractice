#include <stdio.h>
int main()
{
	int i,s;
	s = 0;
	i = 0;
	while(i<5)
	{
		s = s+i;
		i = i+1;
	}
	printf("%d",s);
}

