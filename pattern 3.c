#include <stdio.h>//standard input-output header file
//bismillah
int main() 
{
    int a, b, rows;
    //input number of rows
printf("Enter the number of rows: ");
    scanf("%d", &rows);
    //code by Abrar_22, CSE 18th
    for (a = 1; a <= rows; a++) //outer loop for number of rows
    {
        for (b = 1; b <= a; b++) //inner loop to print patterns
        {
            printf("%d ", (a + b + 1) % 2);  //alt 1 and 0
        }
        printf("\n");
    }
    return 0;
    //alhamdulillah

}
