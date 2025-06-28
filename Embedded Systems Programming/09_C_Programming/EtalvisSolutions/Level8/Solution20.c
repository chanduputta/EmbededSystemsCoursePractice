/*
Name : Solution20.c
Description : Write a C program to find the HCF of two numbers using a function.
Author : Shreyash
Date : 2023-10-01
Version : 1.0
License : This code is licensed under the GNU General Public License v3.0.
You can redistribute it and/or modify it under the terms of the GNU GPL v3.0
		 : as published by the Free Software Foundation.	
*/

#include<stdio.h>
int disp_count_HCF2(int,int);
int main ()
{
	int x,y,result;
	printf("Enter two numbers to find their HCF: "); // Prompt the user to enter two numbers
	scanf("%d %d",&x,&y);
	result = disp_count_HCF2(x,y);
	printf("HCF of given numbers is: %d\n",result);
}
int disp_count_HCF2(int a,int b)
{
	int y;
	y = (a > b) ? a : b; // Start with the larger number
	for(int i = y; i >= 1; i--) // Loop from the larger number down to 1
	{
		if (a % i == 0 && b % i == 0) // Check if i is a common divisor of both a and b
		{
			return i; // If it is, we found the HCF
		}
	}
	{
		printf("No HCF found.\n"); // If no common divisor is found, print a message
		return 1; // Return 1 as the HCF if no other common divisor is found
	}
	// Note: The above return 1 is not necessary as the loop will always find at least 1 as a common divisor.
}	
// The function disp_count_HCF2 calculates the HCF of two numbers by checking each number from the larger one down to 1.
// It returns the first number that divides both a and b evenly, which is the HCF of the two numbers.
// The main function prompts the user for input, calls disp_count_HCF2 to compute the HCF, and prints the result.



