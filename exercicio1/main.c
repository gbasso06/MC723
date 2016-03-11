#include <stdio.h>
#include "calc_primo.h"

main()
{
  int n, i;
  int total = 0;

  printf("Entre com n: ");
  scanf ("%d", &n);


  for (i=2; i<= n; i++ )
  	if (primo(i))
    	total++;
  

   printf("total: %d\n", total);
}

