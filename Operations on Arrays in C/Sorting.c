#include <stdio.h>
void bubble_sort(int arr[], int size) {
for (int i = 0; i < size - 1; i++) {
for (int j = 0; j < size - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}
int main() {
int numbers[] = {50, 10, 40, 20, 30};
int size = sizeof(numbers) / sizeof(numbers[0]);
printf("Before sorting: ");
for (int i = 0; i < size; i++) {
printf("%d ", numbers[i]);
}
bubble_sort(numbers, size);
printf("\nAfter sorting: ");
for (int i = 0; i < size; i++) {
printf("%d ", numbers[i]);
}
return 0;
}
