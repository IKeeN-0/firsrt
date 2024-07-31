#include <stdio.h>

int main() {

    float a,b;
    printf("Enter income : ");
    scanf("%f",&a);

    if(a <= 30000) {
        b = a*0.05;
        printf ("Tax owed is : %.2f", b);
    } else if (a>=30001 && a<=100000){
        b = (30000 * 0.05) + ((a - 30000) * 0.1);
        printf ("Tax owed is : %.2f", b);
    } else {
        b = (30000 * 0.05) + (70000* 0.1) + ((a - 100000) * 0.2);
        printf ("Tax owed is : %.2f", b);
    }

    return 0;
}

