#include "sort.h"

void insertion(int *numbers, int length)
{
  int index, next;
  int key;

  if (length >= 2) {
    for (next = 1; next < length; next++) { // 2 to numbers.length or (zero based 1 to numbers.length-1)
      key = numbers[next];
      index = next - 1;
      while (index >= 0 && numbers[index] > key) {
	numbers[index + 1] = numbers[index];
	index--;
      }
      numbers[index + 1] = key;
    }
  }
}
