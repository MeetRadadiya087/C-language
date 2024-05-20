// Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
// For example,
// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3

// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 7
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 9
// a[2][2] = 6

// Output:
// Enter row number: 0
// Elements of row 0: 2, 7, 1
// The sum of a row 0: 10

// Enter column number: 2
// Elements of column 2: 1, 4, 6
// The sum of column 2: 11

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int array[rows][cols];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int row;
    printf("\nEnter row number: ");
    scanf("%d", &row);
    printf("Elements of row %d: ", row);
    int rowSum = 0;
    for (j = 0; j < cols; j++)
    {
        printf("%d", array[row][j]);
        rowSum += array[row][j];
        if (j < cols - 1)
            printf(", ");
    }

    int col;
    printf("\nEnter column number: ");
    scanf("%d", &col);
    printf("Elements of column %d: ", col);
    int colSum = 0;
    for (i = 0; i < rows; i++)
    {
        printf("%d", array[i][col]);
        colSum += array[i][col];
        if (i < rows - 1)
            printf(", ");
    }
    printf("\nThe sum of column %d: %d\n", col, colSum);

    return 0;
}