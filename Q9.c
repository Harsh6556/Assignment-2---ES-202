// C program to print number in words
#include <stdio.h> // header files
#include <string.h> // header files
#include <stdlib.h> // header files
 
void num_to_words(char *n) // finction that prints the number in words
{
    int l = strlen(n); // store number of digits in the number
 
   /* base case */
    if (l == 0)
    {
        fprintf(stderr, "empty string\n");
        return;
    }
    if (l > 4)
    {
        fprintf(stderr, "Length should not be more than 4\n");
        return;
    }

    char *single_dig[] = { "zero", "one", "two", 
                               "three", "four","five", 
                               "six", "seven", "eight", "nine"}; // store the single dgits numbers in words
 
    char *two_dig[] = {"", "ten", "eleven", "twelve", 
                               "thirteen", "fourteen",
                               "fifteen", "sixteen", 
                               "seventeen", "eighteen", "nineteen"}; // store numbers 10 to 19 in words
 
    char *tens_mult[] = {"", "", "twenty", "thirty", "forty", "fifty",
                            "sixty", "seventy", "eighty", "ninety"}; // store the tens multiples in words
 
    char *tens_pow[] = {"hundred", "thousand"}; // store the tens powers in words
 
    printf("\n%s: ", n); // for debugging
 
    if (l == 1) // check for single digit number
    {
        printf("%s\n", single_dig[*n - '0']);
        return;
    }
 
    while (*n != '\0')
    {
 
        if (l >= 3) // checks for first two digits
        {
            if (*n -'0' != 0) {
                printf("%s ", single_dig[*n - '0']);
                printf("%s ", tens_pow[l-3]); 
            }
            --l;
        }
 
        else 
        {
            if (*n == '1') // check for 10 - 19
            {
                int sum = *n - '0' + *(n + 1)- '0';
                printf("%s\n", two_dig[sum]);
                return;
            }
            else if (*n == '2' && *(n + 1) == '0') // check for 20
            {
                printf("twenty\n");
                return;
            }
 
            else
            {   /* check for 21 to 99 */
                int i = *n - '0';
                printf("%s ", i? tens_mult[i]: "");
                ++n;
                if (*n != '0')
                    printf("%s ", single_dig[*n - '0']);
            }
        }
        ++n;
    }
}
int main(void)
{
    num_to_words("6753"); // convert the number into words
    return 0;
}
