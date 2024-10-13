#include <stdio.h> //standard input-output header file
//bismillah
int main()
{
    int num1, num2, num3, largest;
    //Taking input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    //code by Abrar_22, CSE 18th
    //Using nested if else statements to find the largest number
    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            largest = num1;
        }
        else
        {
            largest = num3;
        }
    }
    else
    {
        if (num2 >= num3)
        {
            largest = num2;
        }
        else
        {
            largest = num3;
        }
    }
    //Printing the largest number
    printf("The largest number is: %d\n", largest);
    //alhamdulillah
    return 0;
}
