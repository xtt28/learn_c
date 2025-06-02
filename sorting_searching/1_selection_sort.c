#include <limits.h>
#include <stdio.h>

void selection_sort(size_t len, int* nums) {
  for (int i = 0; i < len; ++i) {
    int min = -1;
    for (int j = i; j < len; ++j)
      if (min == -1 || nums[j] < nums[min])
	min = j;
    int tmp = nums[i];
    nums[i] = nums[min];
    nums[min] = tmp;
  }
}

int main(void) {
  int my_arr[] = {5, 2, 3, 1, 9, 1, 8, 0, 2, 5, 4, 3, 8, 8, 5, 9, 2, 1, 503, -2};
  size_t len = sizeof(my_arr) / sizeof(int);
  selection_sort(len, my_arr);
  for (int i = 0; i < len; ++i) {
    printf("%d ", my_arr[i]);
  }
}
