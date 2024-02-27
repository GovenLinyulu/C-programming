/*Goven Linyulu
ENE212-0263/2020*/
#include <stdio.h>

int main() {
    int array[10];
    int omittedNumber = 6;
    int reservedIndex = 4;

    int i, j;
    for (i = 0, j = 1; i < 9; i++) {
        if (i == reservedIndex) {
            array[i] = 0;
            continue;
        }
        array[i] = j++;
    }

    printf("Array before inserting the omitted number:\n");
    for (i = 0; i < 9; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    array[reservedIndex] = omittedNumber;

    printf("\nArray after inserting the omitted number:\n");
    for (i = 0; i < 9; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    array[reservedIndex] = 0;

    int middleIndex = 4;
    int insertedNumber = 6;

    array[middleIndex] = insertedNumber;

    printf("\nArray after inserting the number at the middle:\n");
    for (i = 0; i < 9; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
