/* complicated not*/
#include<stdio.h>
#include<math.h>
int main()
{
	int User_input=0,Output=0,digit0=0,digitn=0,x=0,n,count=0,number=0;
	printf("Enter a input number:");
	scanf("%d",&User_input);
	digit0 = User_input%10; // first digit
	//printf("%d\n",digit0);
	x = User_input;
	//printf("%d\n",x);
loop: if(x > 0)
      {
	      count++;
	      x = x/10;
	      goto loop;
      }
     	//printf("%d\n",count);
	n = pow(10,count-1);
	//printf("%d\n",n);
      	digitn = User_input/n; // last digit
	//printf("%d\n",digitn);
	number = User_input%n; 
	number = number/10; // middle numbers
	//printf("%d\n",number);
	Output = (digit0*n)+number*10+digitn;
      	printf("%d\n",Output);
}


