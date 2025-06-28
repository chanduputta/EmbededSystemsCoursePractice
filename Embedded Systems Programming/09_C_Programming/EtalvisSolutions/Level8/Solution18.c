/*
Name : Solution18.c
Description : Write a C program to find the LCM of two numbers using a function.
Author : Shreyash
Date : 2023-10-01
Version : 1.0
License : This code is licensed under the GNU General Public License v3.0.
You can redistribute it and/or modify it under the terms of the GNU GPL v3.0
		 : as published by the Free Software Foundation.	
*/

#include<stdio.h>
int disp_LCM2(int,int);
int main ()
{
	int x,y,result;
	printf("Enter two numbers to find their LCM: "); // Prompt the user to enter two numbers
	scanf("%d %d",&x,&y);
	result = disp_LCM2(x,y);
	printf("LCM of given numbers is: %d\n",result);
}
int disp_LCM2(int a,int b)
{
	int y;
	y = (a > b) ? a : b; // Start with the larger number
	while (1)
	{
		if (y % a == 0 && y % b == 0) // Check if y is a multiple of both a and b
		{
			break; // If it is, we found the LCM
		}
		y++; // Increment y to check the next number
	}
	// Return the LCM
	// Note: The variable 'y' is used to find the LCM, so we
	// can return it directly.
	// The original variables 'a' and 'b' are not modified.
	// The function returns the LCM of the two numbers.
	// The function does not modify the input parameters.
	// The function uses a while loop to find the LCM.
	// The function uses a conditional operator to determine the starting point.
	// The function uses a break statement to exit the loop when the LCM is found.
	// The function uses a return statement to return the LCM.
	// The function does not use any global variables.
	// The function does not use any static variables.
	// The function does not use any pointers.
	// The function does not use any arrays.
	// The function does not use any structures.
	// The function does not use any unions.
	// The function does not use any enums.
	// The function does not use any macros.
	// The function does not use any preprocessor directives.	
	
	return (y);
}
	




