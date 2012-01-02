#include "sort.h"

/* numbers must have a least a '\0' character representing an empty list */
int insertion(double numbers[])
{
  int quantity = -1;
  int index, next;
  double key;

  if (numbers[0] != NIL && numbers[1] != NIL) {
    for (next = 1; numbers[next] != NIL; next++) { // 2 to numbers.length
      key = numbers[next];
      index = next - 1;
      while (index >= 0 && numbers[index] > key) {
	numbers[index + 1] = numbers[index];
	index--;
      }
      numbers[index + 1] = key;
    }
  }

  return index;
}
