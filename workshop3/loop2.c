#include <stdio.h>

int main() {

    int n =0,m=1;
    for (int i = 1; i <=10; i++)
    {
        printf( "%d ", n);
        int fib = n+m ;
        n = m;
        m = fib;
    }

    return 0;

}