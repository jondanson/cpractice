#include <stdio.h>


int fib ( int n ) {
    int a = 1;
    int b = 1;
    printf (b);
    printf ("fib start\n");
    for (int i = 0; i <= n; i++) {
        printf ("In loop\n");
        a = b;
        //b = b + a;
        printf (a);
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
