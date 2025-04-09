#include<stdio.h>
int main()
{
	int User_input,Output=0,digit0;
	printf("Enter a input number:");
	scanf("%d",&User_input);
loop: if(User_input > 0)
      {
	      digit0 = User_input%10;
	      //printf("%d\n",digit0);
	      Output=Output*10+digit0;
	      User_input = User_input/10;
	      goto loop;
      }
      printf("%d\n",Output);
}
