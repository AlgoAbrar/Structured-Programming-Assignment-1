#include <stdio.h> //standard input-output header file
// bismillah

int main()
{
    float balance, withdraw;
    // Input account balance
    printf("Enter your account balance: ");
    scanf("%f", &balance);
    // Input withdrawal amount
    printf("Enter the amount to withdraw: ");
    scanf("%f", &withdraw);
    // code by Abrar_22, CSE 18th
    //  Check withdrawal amount
    if (withdraw <= balance)
    {
        // substract withdrawal amount
        balance -= withdraw;
        printf("Your Transaction is successful!\n");
        printf("Your New balance: %.2f\n", balance);
    }
    else
    {
        printf("Insufficient Balance.\n");
    }
    // alhamdulillah
    return 0;
}
