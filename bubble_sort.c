#include <stdio.h>

void print_arr(int arr[], int size_of_arr) {
  if (size_of_arr <= 0)
    return;
  printf("[");
  for (int i = 0; i < size_of_arr; i++) {
    printf("%d, ", arr[i]);
  }
  printf("]\n");
}

void bubble_sort(int *arr, int size_of_arr) {
  if (arr == NULL) {
    fprintf(stderr, "The array couldn't be NULL\n");
    return;
  }

  if (size_of_arr <= 0) {
    fprintf(stderr, "The size array couldn't be nagative or zero\n");
    return;
  }
  for (int i = 0; i < size_of_arr; i++) {
    int swapped = 0;
    for (int j = 0; j < size_of_arr - i; j++) {
      if (j == (size_of_arr - 1))
        continue;
      int value_at_idx_1 = arr[j];
      int value_at_idx_2 = arr[j + 1];
      if (value_at_idx_1 > value_at_idx_2) {
        arr[j] = value_at_idx_2;
        arr[j + 1] = value_at_idx_1;
        swapped += 1;
      }
    }
    if (swapped == 0)
      break;
  };
}

int main(void) {
  int arr[] = {3, 8, 1, 4, 5};
  printf("Original array\n");
  print_arr(arr, sizeof(arr) / sizeof(int));
  bubble_sort(arr, sizeof(arr) / sizeof(int));
  printf("After sorted array\n");
  print_arr(arr, sizeof(arr) / sizeof(int));
  return 0;
}
