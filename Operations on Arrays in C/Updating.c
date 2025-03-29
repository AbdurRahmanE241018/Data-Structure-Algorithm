#include <stdio.h>
int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index = 2;
    numbers[index] = 35; // Update element at index 2
    printf("Updated array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}
