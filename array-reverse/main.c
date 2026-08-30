#include <stdio.h>

#define N 10

int main() {
  printf("Please enter the array you want to reverse:\n[\n");

  int a[N], *p;
  for(p=a; p < a+N; p++) {
    printf("\t");
    scanf("%d", p);
  }
  printf("]\n");

  printf("Here is your reversed array:\n");
  printf("[");
  for(p=a + N-1; p>=a; p--) {
    if(p==a) printf("%d", *p);
    else printf("%d,", *p);
  }
  printf("]\n");
}
