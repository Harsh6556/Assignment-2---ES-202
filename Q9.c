// C program to input a number and print it in words
#include <stdio.h> // header files
int main()
{
    int n, rev = 0; // declare some variables
    
    printf("Enter any number to print in words: "); // ask user input
    scanf("%d", &n); // read in user input

    /* store the reverse of the input number */
    while(n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }

   /* extracting last digits and print it in words */
    while(rev != 0)
    {
        switch(rev % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        rev = rev / 10;
    }
    return 0;
}
