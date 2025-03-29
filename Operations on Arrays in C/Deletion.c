#include <stdio.h>
void delete_element(int arr[], int *size, int pos)
{
    for (int i = pos; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Before deletion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    delete_element(numbers, &size, 2); // Delete element at index 2
    printf("\nAfter deletion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}
