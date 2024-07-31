#include <stdio.h>

int main() {
    float a, b, c;

    scanf("%f" , &a);
    scanf("%f" , &b);
    c = a/(b*b);
    
    printf("Your BMI is %.2f\n" ,c);
    if(c <= 18.5) {
        printf("You are underweight.");
    } else if (c >= 18.5 && c <= 24.9){
        printf("You are normal weight.");
    } else if (c >= 25.0 && c <= 29.9){
        printf("You are overweight.");
    } else {
        printf("You are obese.");
    } 

    return 0;

}