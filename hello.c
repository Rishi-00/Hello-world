#include<stdio.h>
#include<stdlib.h>

int main()
{
  printf("Hello! world\n");
  int *ptr = (int*)malloc(2*sizeof(int));
  if(ptr == NULL)
  {
    printf("Memory not allocated.\n");
    return 1;
  }
  // Allocating values correctly
  for(int i = 0; i < 2; i++)
  {
    ptr[i] = i + 1;
  }
  // Printing the first value
  printf("%d\n", ptr[0]);
  // Freeing up allocated memory
  free(ptr);
  return 0;
}
