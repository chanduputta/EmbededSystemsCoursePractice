#include<stdio.h>
int find_no_of_zeros(int no);
int main()
{
	int number,result;
	scanf("%d",&number);
	result = find_no_of_zeros (number);
	printf("%d",result);
	return 0;
}
int find_no_of_zeros (int no)
{
	int result=0,x0;
	
	
loop:if(no>0)
     { x0 = no%10;
	
	if(x0==0)
		result++;

	no=no/10;

	goto loop;
     }

	return result;
}
