#include<stdio.h>
int count_digits(int no);
int main()
{
	int number, result;
	scanf("%d",&number);
	result = count_digits(number);
	printf("%d",result);
	return 0;
}
int count_digits(int no)
{
	int result=0;
loop:if(no>0)
     {
	     result++;
	     no=no/10;
	     goto loop;
     }
 	    return result;
}
