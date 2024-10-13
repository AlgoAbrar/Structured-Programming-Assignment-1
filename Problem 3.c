#include <stdio.h> //standard input-output header file
// bismillah
int main()
{
    int num, i, flag = 1;
    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    // code by Abrar_22, CSE 18th
    //  Prime numbers are greater than 1
    if (num <= 1)
    {
        flag = 0; // 0 and 1 are not prime numbers
    }
    else
    {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 0; // Found a divisor, not prime
                break;
            }
        }
    }
    // Output the result
    if (flag == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    // alhamdulillah
    return 0;
}
