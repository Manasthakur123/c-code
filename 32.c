#include <stdio.h>

void sum();
void main()
{
    printf("manas\n");
    printf("To calculate the sum of two numbers ");
    sum();
}
void sum()
{
    int a,b;
  printf("\nEnter two numbers:");
  scanf("%d %d", &a, &b);
  printf("The sum is %d", a + b);
}