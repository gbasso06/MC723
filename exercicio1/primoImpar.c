#include <stdio.h>

int primo(int n)
{
  int i;

  if (n % 2 == 0) return 0;

  for(i = 3; i < n; i = i + 2)
    if (n % i == 0)
      return 0;
  
  return 1;
}

main()
{
  int n, j;
  int total = 0;

  printf("Entre com n: ");
  scanf ("%d", &n);


  for (j=1; j<= n; j++ )
    if (primo(j))
      total++;


  printf("total: %d\n", total);


}