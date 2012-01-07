#include "sort.h"

 /* returns the length of the number when in string format, a zero length means no more input or valid numbers in the stream */
int get_number(int *num)
{
  char c;
  int length = 0;
  int new_word = 0;
  char number[CHARNUMSIZE];
  
  while ((c = getchar()) != EOF && length < CHARNUMSIZE) {
    if (isdigit(c)) {
      number[length++] = c;
      if (new_word == 0) new_word = 1;
    } else if (new_word == 1) {
      number[length] = '\0';
      break;
    }
  }

  sscanf(number, "%d", num);

  return length;
}

void print_numbers(int *numbers, int length)
{
  int index = 0;

  while (index < length) printf(" %d", numbers[index++]);
}
