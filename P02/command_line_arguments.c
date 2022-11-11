//
// Tomás Oliveira e Silva, AED, October 2021
//
// list all command line arguments
//

#include <stdio.h>

int main(int argc,char *argv[argc])
{
  char *remaining;
  long n;
  for(int i = 0;i < argc;i++){
    n = strtol(argv[i], &remaining, 10);
    printf("argv[%2d] = %ld\"%s\"\n", i, n,remaining);
  }
    
  return 0;
}
