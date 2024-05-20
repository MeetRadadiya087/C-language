// Q.2 Write a Program to find the largest element from a given 2D array.
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
// The largest element is: 9

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

    int max = array[0][0];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", max);

    return 0;
}