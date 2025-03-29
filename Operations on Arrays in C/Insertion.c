#include <stdio.h>
void insert_element(int arr[], int *size, int pos, int value)
{
    for (int i = *size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*size)++;
}
int main()
{
    int numbers[10] = {10, 20, 30, 40, 50}; // Array with extra space
    int size = 5;
    printf("Before insertion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    insert_element(numbers, &size, 2, 25); // Insert 25 at index 2
    printf("\nAfter insertion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}
