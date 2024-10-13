#include <stdio.h>//standard input-output header file
//bismillah
int main() 
{
    int rows, coln = 1, a, b;
    //input for rows
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
//code by Abrar_22, CSE 18th
    for (a = 0; a < rows; a++) //outer loop for number of rows
    {
        for (b = 0; b <= a; b++) //inner loop to print patterns
        {
            if (b == 0 || a == 0)
                coln = 1;
            else
                coln = coln * (a - b + 1) / b;
            printf("%d ", coln);
        }
        printf("\n");
    }
    return 0;
    //alhamdulillah
}
