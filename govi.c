/*Goven Linyulu
ENE212-0263/2020*/
#include <stdio.h>

int main()
{
    int array[10];
    int omittedNumber = 6; // Number to be omitted

    // Assigning numbers in ascending order with one number omitted
    int i, j;
    for (i = 0, j = 1; i < 10; i++)
    {
        if (i == 5) // Omitting number at index 5 (middle)
            continue;
        array[i] = j++;
    }

    // Reserving a location for the omitted number
    int reservedIndex = 5;

    // Inserting the omitted number
    array[reservedIndex] = omittedNumber;

    // Printing the array
    printf("Array with omitted number inserted:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}