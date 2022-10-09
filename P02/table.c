//
// Tomás Oliveira e Silva, AED, October 2021
//
// program to print a table of the squares and square roots of some integers
//
// on GNU/Linux, run the command
//   man 3 printf
// to see the manual page of the printf function
//

#include <math.h>
#include <stdio.h>

void do_it(int N)
{
  int i;
  FILE *table = fopen("table.txt", "w+");

  fprintf(table, " angle         cos               sin\n");
  fprintf(table, "-------      --------          -------\n");
  for(i = 0;i <= N;i++)
    fprintf(table, "%4d %15f %17f\n",i,cos((double)i),sin((double)i));

  fclose(table);
}

int main(void)
{
  do_it(90);
  return 0;
}
