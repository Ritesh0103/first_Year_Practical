#include <stdio.h>
int main()
{
    int array[30], num, i, pos;
    /*num is number of elements in the array and loc is the position of the array to be deleted.
    starting from arr[0] as the first(1) position and so on. */

    scanf("%d", &num); /*Accepts the size of array from test case data */

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]); /* Read the array elements from the test case data */
    }

    scanf("%d", &pos); /* Accepts the Position of the element to be deleted */
                       // Check if the position is valid
    if (pos < 1 || pos > num)
    {
        printf("Invalid position!\n");
    }
    else
    {
        // Shift the elements after the deleted element to the left
        for (int i = pos - 1; i < num - 1; i++)
        {
            array[i] = array[i + 1];
        }
    }
    // Decrement the size of the array
    num--;
    /* Printing the array after deletion */

    for (int i = 0; i < num; i++)
        printf("%d\n", array[i]);

    return 0;
}