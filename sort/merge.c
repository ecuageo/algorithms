#include "sort.h"

void m(int *a, int p, int q, int r);
void msort(int *a, int p, int q);
void arraycopy(int *src, int *target, int length);

void merge(int *numbers, int length) {
  msort(numbers, 0, length - 1);
}

void m(int *a, int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;
  int left[n1];
  int right[n2];
  int i, j, k;

  arraycopy(a+p, left, n1);
  arraycopy(a+q+1, right, n2);

  i = j = 0;

  for (k = p; k <= r; k++) {
    if (j == n2 || (i < n1 && left[i] <= right[j])) {
      a[k] = left [i];
      i++;
    } else {
      a[k] = right[j];
      j++;
    }
  }

}

void msort(int *a, int p, int r) {
  int q;

  if (p < r) {
    q = (p + r) / 2;
    msort(a, p, q);
    msort(a, q + 1, r);
    m(a, p, q, r);
  }
}

void arraycopy(int *src, int *target, int length) {
  int index;

  for (index = 0; index < length; index++) target[index] = src[index];
}

