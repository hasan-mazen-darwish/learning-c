#include <stdio.h>
#include <stdlib.h>

int main() {
  int sizeOfTheArray, *arr;
  printf("Type the number of elements you want inside the array: ");
  scanf("%d", &sizeOfTheArray);

  arr = malloc(sizeOfTheArray * sizeof(int));
  if(arr == NULL) {
    printf("Failed to allocate memory for the array!");
    return 1;
  }

  printf("\nNow, enter the array:\n[\n");

  int *p;
  for(p = arr; p<arr + sizeOfTheArray; p++) {
    printf("  ");
    scanf("%d", p);
  }

  printf("]\n\nHere is your reversed array: [");
  for(p=arr+sizeOfTheArray-1; p>=arr; p--) {
    if(p==arr) {
      printf("%d", *p);
      break;
    } else printf("%d,", *p);
  }
  printf("]\n");

  free(arr);
  return 0;
}
