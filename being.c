// the world
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// you
int i, j, x, y, n, t;

// lets do this
int main(int argc, char *argv[])
{
  // you
  srand(time(NULL));
  n=rand() % 100 + 1;
  x=rand() % n + 1;
  y=rand() % x + 1; 
  i=0;
  t=n;

  // say hello
  printf("%d hello %d, %d, %d\n", i, n, x, y);
  for(i=1; i<n; i++)
  {
    // has come your time?
    if (i!=x) {
      // your thing
      if (i>t && i<t+y) {
        // do your thing
        printf("%d my thing\n", i);
      } 
      else if (i==t+y) {
        // enough
        printf("%d enough\n", i);
      } 
      else {
        // you are here
        printf("%d i'm here\n", i);
      }
    } else {
      // your time has come
      t=i;
      printf("%d my time has come\n", t);
    }
  }
  // say goodbye
  printf("%d goodbye\n", i);

  // your seed
  return(i);
}