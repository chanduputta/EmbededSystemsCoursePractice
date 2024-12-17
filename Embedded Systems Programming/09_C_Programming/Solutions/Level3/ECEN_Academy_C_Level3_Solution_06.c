#include<stdio.h>
int reverse_number(int no);
int main()
{
	int number,result;
	scanf("%d",&number);
	result = reverse_number(number);
	printf("%d",result);
	return 0;
}
int reverse_number(int no)
{
	int result=0,n1;
loop:if(no>0)
     {
	n1 = no%10;
	result = result*10+n1;
	no=no/10;
	goto loop;
	}	
	return result;
}
