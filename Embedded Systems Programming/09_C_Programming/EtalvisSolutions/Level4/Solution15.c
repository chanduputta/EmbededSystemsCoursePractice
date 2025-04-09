#include<stdio.h>
#include<math.h>
int main()
{
	int User_input=0,Output=0,digitn=0,x=0,n,count=0,number=0;
	printf("Enter a input number:");
	scanf("%d",&User_input);
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
	if(digitn%2 != 0)
	{
		digitn = digitn-1;
	}
	number = User_input%n; 
	//printf("%d\n",number);
	Output = (digitn*n)+number;
      	printf("%d\n",Output);
}
