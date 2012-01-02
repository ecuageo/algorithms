#include "sort.h"

 /* returns the length of the number when in string format, a zero length means no more input or valid numbers in the stream */
int get_number(double *num)
{
  char c;
  int length = 0;
  int new_word = 0;
  char number[CHARNUMSIZE];
  
  while ((c = getchar()) != EOF && length < CHARNUMSIZE) {
    if (isdigit(c) || c == '.') {
      number[length++] = c;
      if (new_word == 0) new_word = 1;
    } else if (new_word == 1) break;
  }

  sscanf(number, "%lf", num);

  return length;
}

