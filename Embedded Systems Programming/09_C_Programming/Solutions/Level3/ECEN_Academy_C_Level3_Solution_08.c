#include<stdio.h>
int check_assending(int no);
int main()
{
	int number,result;
	scanf("%d",&number);
	result = check_assending(number);
	if(result == 1)
		printf("Yes");
	else
		printf("No");
	return 0;
}
int check_assending(int no)
{
	int result,n1,n2;
loop:if(no>0)
	{ 
		n1 = no%10;
		no = no/10;
	  	n2 = no%10;
		if(n1>n2)
			result = 1;
		else
			return 0;
		
		goto loop;
		
	
	}
	return result;
}



