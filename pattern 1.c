#include <stdio.h> //standard input-output header file
//bismillah
int main() 
{
    int a, b, rows;
    //number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
//code by Abrar_22, CSE 18th
    for (a = 1; a <= rows; a++) //outer loop for number of rows
     {
        for (b = 1; b <= a; b++) //inner loop to print number patterns
        {
            printf("%d ", b);
        }
        printf("\n");
    }
    return 0;
//alhamdulillah
}
