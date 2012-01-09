#include "sort.h"

void bubble(int *numbers, int length) {
  int i, j, k;
  int key;

  for (i = 0; i < length - 1; i++) {
    for (j = length - 1; j > i; j--) {
      if (numbers[j] < numbers[j - 1]) {
	key = numbers[j];
	numbers[j] = numbers[j - 1];
	numbers[j - 1] = key;
      }
    }
  }
}
