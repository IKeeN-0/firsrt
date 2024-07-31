#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[10] = {50,30,80,10,40,90,20,70,60,100} , n=0;
    bool check = false;
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        if(n == arr[i]){
            check = true;
        }
    }
    
}