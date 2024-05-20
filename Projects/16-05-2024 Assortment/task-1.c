// Q.1 Write a Program to find all the negative elements from a given 1D array.
// For example,
// Input:
// Enter the array's size: 5

// Enter array's elements:
// a[0] = 2
// a[1] = -4
// a[2] = 1
// a[3] = -3
// a[4] = -5

// Output:
// Negative elements from an Array: -4, -3, -5

#include <stdio.h>

int main()
{
    int size, i;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("Negative elements from the array: ");
    for (i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}