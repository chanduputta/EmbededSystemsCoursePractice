/* Problem: Get a number from user and divide by the number by 8 and print the remainder.
 * Examole: Input: 45 Output 5. Input: 143 Output: 7 */

#include<stdio.h>
int main ()
{
	int x,y;
	printf("Enter Number : ");
	scanf("%d",&x);
	y=x%8;
	printf("Result = %d",y);
}

