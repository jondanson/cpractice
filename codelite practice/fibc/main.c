#include <stdio.h>


int fib ( int n ) {
    int a = 1;
    int b = 0;
    printf ("%d\n", b);
    printf ("%d\n",a);
    for (int i = 1; i <= n; i++) {
        printf ("%d\n",a);
        b = a
        a = b;
    }
    return 0;
}


int main(int argc, char **argv)
{
    printf ("We start\n");
    int k = 5;
    int c = fib(k);
    return c;
}
