/* Get a number from user and multiply 3 to that number and print the result
 * Example: Input: 45 Output 135. Input: 1200 Output: 3600 */

#include <stdio.h>
int main ()
{
	int x,y;
	printf("Enter Number : ");
	scanf("%d", &x);
	y = 3*x;
	printf("Result = %d",y);
}

