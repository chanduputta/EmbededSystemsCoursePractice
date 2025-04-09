#include<stdio.h>
int main()
{
	int User_input,x,n=0,count=0;
	printf("Enter a input number:");
	scanf("%d",&User_input);
	//printf("%d\n",x);
loop1: if(n <= User_input)
      	{
	      n++;
	loop2: if(User_input%n == 0)
	       {
		       count++;
	       }
	      goto loop1;
      	}

       printf("%d\n",count);
if(count == 2)
{
	printf("%d is prime",User_input);

}
else
{
	printf("%d is not prime",User_input);
}
return 0;
}
