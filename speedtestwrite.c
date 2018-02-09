#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
void Print()
{
  int i;
  for (i = 0; i < 10000; i++)
  {
    printf("Print string\n");
  }
}
void Write()
{
  int i;
    for (i = 0; i < 10000; i++)
  {
    write(STDOUT_FILENO, "Write string\n", strlen("Write string\n"));
  }
}
int main()
{
  clock_t r;
  r = clock();
  Write();
  r = clock() - r;
  double time_write = ((double)r) / CLOCKS_PER_SEC; // in seconds
  clock_t t;
  t = clock();
  Print();
  t = clock() - t;
  double time_print = ((double)t) / CLOCKS_PER_SEC; // in seconds
  printf("printf() took %f seconds to execute \n", time_print);
  printf("write() took %f seconds to execute \n", time_write);
  return 0;
}