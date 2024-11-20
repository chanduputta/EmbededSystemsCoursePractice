#include <stdio.h>
int main()
{
	int x1,x2,y,y1,y2,y3,z;
	printf("Enter First 3 digit Number:");
	scanf("%d",&x1);
	printf("Enter Second 3 digit Number:");
	scanf("%d",&x2);
	z = (x1%100 > x2%100)? x1:x2;
	//printf("z = %d\n",z);
	y1 = z/100; //printf("%d\n", y1); //100s place
	y2 = z%10; //printf("%d\n", y2); // 1s place
	if(y1>y2)
	y = y1-y2;
	else
	y = y2-y1;
	printf("Result = %d",y);
}
	
