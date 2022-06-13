# 9-1otricatelnoe

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

Вывести через пробел все целые числа из промежутка 
[
A
,
B
]
,
(
A
<
B
)
[A,B],(A<B) в обратном порядке: от 
B
B до 
A
A.
Входные данные:
Два целых числа 
A
,
B
A,B, при этом 
A
<
B
A<B.

Выходные данные: 
Целые числа из промежутка от 
[
A
,
B
]
[A,B], записанные через пробел в обратном порядке.
