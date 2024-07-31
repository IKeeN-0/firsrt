#include <stdio.h>

int main(){
    int arr[3][3];
    for(int i =0; i < 3; i++){
        for(int j = 0; j< 3;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int n = arr[0][0];
    for (int i = 0; i < 3; i++) {
         for(int j = 0 ; j < 3; j++){
            if(n < arr[i][j]){
                n = arr[i][j];
            }
        } 
    }

    printf("The maximum value in the matrix is: %d",n);
}