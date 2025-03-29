#include <stdio.h>

long main(){

    long f0 = 0;
    long f1 = 1;
    long n;
    long fn = f0 + f1;
    printf("enter the value of n: ");
    scanf("%d", &n);

    for (int i = 3; i <= n; i++)
    {
      f0 = f1;
      f1 = fn;
      fn = f0 + f1;

      printf("%ld, " , fn);
    }

    return 0;
}

