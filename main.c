#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void) { 
	
  int a,b;
  scanf("%d%d", &a,&b);

  for (int i = b; i >= a; i--)
{
	printf (" %d",i);
}

  return 0;
}