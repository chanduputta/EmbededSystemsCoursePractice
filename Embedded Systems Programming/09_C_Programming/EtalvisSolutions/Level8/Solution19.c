#include<stdio.h>
int disp_LCM3(int,int,int);
int main ()
{
	int x,y,z,result;
	printf("Enter three numbers to find their LCM: "); // Prompt the user to enter three numbers
	scanf("%d %d %d",&x,&y,&z);
	result = disp_LCM3(x,y,z);
	printf("%d\n",result);
}
int disp_LCM3(int a,int b, int c)
{
	int y;
	y = (a > b) ? a : b; // Start with the larger number
	y = (y > c) ? y : c; // Compare with the third number to find the maximum
	printf("y = %d\n", y); // Debugging output to check the maximum value
	// Now y is the maximum of a, b, and c
	// We will find the LCM of a, b, and c using a while loop
	// The while loop will continue until we find a number that is a multiple of all three
	// numbers.
	// The while loop will start with the maximum number and increment it until we find the LCM.
	// The while loop will check if the current number is a multiple of all three numbers.
	// If it is, we will break out of the loop and return the LCM.
	// If it is not, we will increment the number and check again.
	// The function will return the LCM of the three numbers.
	while (1)
	{
		if (y % a == 0 && y % b == 0 && y % c == 0) // Check if y is a multiple of a, b, and c
		{
			break; // If it is, we found the LCM
		}
		y++; // Increment y to check the next number
	}
	// Return the LCM
	// Note: The variable 'y' is used to find the LCM, so we
	// can return it directly.
	return (y);
}
	
