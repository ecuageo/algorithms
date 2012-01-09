#include "sort.h"

void selection(int *numbers, int length)
{
  int i = 0;
  int j, smallest, key;

  while (i < length-1) {
    smallest = i;
    j = smallest + 1;
    while (j < length) {
      if (numbers[smallest] > numbers[j]) smallest = j;
      j++;
    }

    key = numbers[i];
    numbers[i] = numbers[smallest];
    numbers[smallest] = key;
    i++;
  }

}

