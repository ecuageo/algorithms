#include <ctype.h>
#include "sort.h"

void print_numbers(double numbers[]);

int main()
{
  double list[SORTLISTSIZE];
  int list_index = 0;

  printf("Enter some numbers\n");

  while (get_number(&list[list_index++]));
  list[list_index] = NIL;                     // null terminate arrays

  insertion(&list);
  /* print_numbers(list); */
  printf("%lf %lf %lf %lf %lf %lf ", list[0], list[1], list[2], list[3], list[4], list[5]);
  printf("\nall done\n");

  return 0;
}

void print_numbers(double numbers[])
{
  int index = 0;

  printf("The numbers you entered: \n");
  while (numbers[index] != NIL) printf(" %lf", numbers[index]);
}
