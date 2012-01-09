#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

int main(int argc, char *argv[])
{
  int list[SORTLISTSIZE];
  int list_index = 0;
  int test[] = {1,2,3,6,10,4};
  char *sort_algorithm;

  if (argc > 1) {
    if (strstr(SORTINGMETHODS,argv[1]) != NULL) {
      sort_algorithm = argv[1];
      printf("Using sorting algorithm: %s\n", sort_algorithm);
    } else {
    printf("You must specificy an available sorting algorithm to use:\n");
    printf("%s\n", SORTINGMETHODS);
    exit(EXIT_FAILURE);
    }
  } else {
    printf("You must specificy the sorting algorithm to use:\n");
    printf("%s\n", SORTINGMETHODS);
    exit(EXIT_FAILURE);
  }
  
  printf("Enter some numbers\n");

  while (get_number(&list[list_index])) list_index++;

  printf("Your numbers: \n");
  print_numbers(list, list_index);

  // switch on sorting algorithm
  switch (sort_algorithm[0]) {
  case 'i':
    insertion(list, list_index);
    break;
  case 's':
    selection(list, list_index);
    break;
  case 'm':
    merge(list, list_index);
    break;
  case 'b':
    bubble(list,list_index);
    break;
  }


  printf("\nYour numbers sorted: \n");
  print_numbers(list, list_index);

  printf("\nall done\n");

  exit(EXIT_SUCCESS);
}

