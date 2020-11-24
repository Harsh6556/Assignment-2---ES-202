// C program to print all even numbers between 1 to 100
#include <stdio.h> // header file
int main()
{
	int i; // declare some variables
	printf("Even numbers between 1 to 100 (inclusive) are \n");
	for (i = 1; i <= 100; i++) // for loop
	{
		if(i%2 == 0) // check for even numbers
		{
		  printf("%d ", i); // print even numbers
	}
}
return 0;
}
