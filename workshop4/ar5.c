#include <stdio.h>

int main(){
    int n=0, arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d" ,&n);
        arr[i] = n;
    }
    int a=0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            if(arr[i] > arr[j])
            {
            a = arr[i];
            arr[i] = arr[j];
            arr[j] = a;
        }
        }
    }
    printf("Array after sorting :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}