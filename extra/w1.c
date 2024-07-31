#include <stdio.h>
int main(){
    int choice = 0;
    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    float area = 0;
    if(choice == 1) {
        float width = 0, height=0 ;
        printf("Enter the width: ");
        scanf("%f",&width);
        printf("Enter the height: ");
        scanf("%f",&height);
        if(width<0 || height <0){
            printf("The area of the rectangle is: Error");
        }
        else {
            area = width*height;
            printf("The area of the rectangle is: %.2f",area);
        }
    } else if(choice == 2) {
        float base = 0, height = 0;
        printf("Enter the base: ");
        scanf("%f",&base);
        printf("Enter the height: ");
        scanf("%f",&height);
        if(base<0 || height <0){
            printf("The area of the triangle is: Error");
        } else {
            area = 0.5*base*height;
            printf("The area of the triangle is: %.2f",area);
        }
    } else if(choice == 3) {
        float radius = 0;
        printf("Enter the radius: ");
        scanf("%f",&radius);
        if (radius < 0){
            printf("The area of the circle is: Error");
        }
         else {
            area =  3.14*(radius*radius);
            printf("The area of the circle is: %.2f",area);
        }

    } else {
        printf("Invalid choice");
    }
}
