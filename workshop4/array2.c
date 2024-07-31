#include <stdio.h>

int main(){
    int n =0 ,arr[10],max,min ;
    for(int i = 0; i <10; i++){
        scanf("%d" , &n);
        arr[i] = n;
    }

    max = arr[0];
    min = arr[0];
    for(int i = 0; i <10; i++){
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Maximum number: %d\n",max );
    printf("Minimum number: %d", min );
}