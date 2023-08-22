#include <stdio.h>
void ft_ft22(int nbr);
void ft_ft(int *nbr);

int main(void)
{
  int a;

  a = 4;
  printf("before=%d\n", a);
  ft_ft(&a);
  printf("after=%d\n", a);
  return(0);
} 
