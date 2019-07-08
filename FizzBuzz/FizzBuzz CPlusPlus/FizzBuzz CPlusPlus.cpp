// FizzBuzz CPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main(void)
{
	int i;
	for (i = 0; i <= 30; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz\t");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\t");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\t");
		}
		else { printf("%d\t", i); }
	}
}