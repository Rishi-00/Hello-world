#include<stdio.h>
int main()
{
  printf("Hello! world");
  int *ptr = (int*)malloc(2*sizeof(int));
  *ptr[10]={1,2,3}
  printf("%d",*ptr);
}
