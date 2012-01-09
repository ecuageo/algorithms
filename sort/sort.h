#include <stdio.h>
#define CHARNUMSIZE 20
#define SORTLISTSIZE 200
#define NIL '\0'
#define SORTINGMETHODS "insertion selection merge"

int get_number(int *num);
void print_numbers(int *numbers, int length);

void insertion(int *numbers, int length);
void selection(int *numbers, int length);
void merge(int *numbers, int length);

