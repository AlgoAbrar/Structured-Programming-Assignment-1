#include <stdio.h>//standard input-output header file
//bismillah
int main() 
{
    int o, p, rows;
    //input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
//code by Abrar_22, CSE 18th
    for (o = rows; o >= 1; o--)//outer loop for number of rows
    {
        for (p = 1; p <= o; p++)//inner loop to print star patterns
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
    //alhamdulillah
}
