#include <stdio.h>

int main() {

    int n, sum=0;

    for (int i = 0; i < 10; i++)
    {
       scanf("%d" , &n);
       if (n <= 0)
       {
            break;
       } else {
            sum += n;
       }
    }
    printf ("%d", sum);
}