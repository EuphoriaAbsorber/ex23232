
#include "head.h"

int main() {
  //int a[] = {2,5,6,7};
  int a[] = {1,2,3,4,8,9};
  //int a[] = {1,2,3,4,8,10,12};
  int size = sizeof a / sizeof a[0];
  char str[200];
  func(a,size, str);
  printf("%s\n", str);
  return 0;
}

