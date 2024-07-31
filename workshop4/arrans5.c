#include <stdio.h>
int main(){
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a=0;
    for(i=0;i<10;i++){
        for(int j =0;j<10;j++){
            if(arr[i] > arr[j]){
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    // for(i=0;i<10;i++){
    //     for(int j =0;j<10;j++){
    //         if(arr[j+1] > arr[j]){
    //             a = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = a;
    //         }
    //     }
    // }
    for (i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}