#include <stdio.h>
int sum14(int no);
int main()
{
	int number,result;
	scanf("%d",&number);
	result = sum14(number);
	if(result == 1)
		printf("Sum of Digits is 14");
	else
		printf("Sum of Digits is not 14");
	return 0;
}
int sum14(int no)
{
	int x,x1,result=0;
	x = no;
loop:if(x>0)
     {
	     x1 = x%10;
	     result = result + x1;
	     x = x/10;
	     goto loop;
     }
     if(result == 14)
	     return 1;
     else 
	     return 0;
}

