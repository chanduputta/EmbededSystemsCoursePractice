#include <stdio.h>
int isPrime(int no);
int main()
{
	int number,result;
	scanf("%d",&number);
	result = isPrime(number);
	if(result == 1)
		printf("Number is Prime");
	else
		printf("Number is not Prime");
	return 0;
}
int isPrime(int no)
{
	int x=1,result=0;

loop:if(x<=no/2)
     {	
	     
	     if(no%x == 0)
	     {
		     result++;
	     }
	     
	     x++;
	     goto loop;
     }

	if(result <= 2)
		return 1;
	else
		return 0;
}


