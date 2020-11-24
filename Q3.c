#include <stdio.h> // header files
int main()
{
    int i, n, sum=0; // declare some variables
  
    printf("Enter value of n - \n "); // ask user to enter the value of n
    scanf("%d", &n); // read in value of n

    for(i=1; i<=n; i+=2)
    {
        sum += i; // store sum of odd numbers
    }

    printf("Sum of odd numbers = %d", sum); // display the result
    return 0;
}