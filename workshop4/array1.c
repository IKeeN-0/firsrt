#include <stdio.h>

int main () {
    int n, arr[5],sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&n);
        sum += n;
        arr[i] = n;
    }

    printf("Sum of entered numbers: %d\n", sum);
    printf("Numbers in array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d " , arr[i]);
    }

return 0; 
}