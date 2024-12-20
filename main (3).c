#include<stdio.h>
void area_of_circle();
void area_of_triangle();
void area_of_rectangle();
int main(){
int choice;
printf("1. AREA OF CIRCLE\n");
printf("2. AREA OF TRIANGLE\n");
printf("3. AREA OF RECTANGLE\n");
printf("4. EXIT\n");
printf("Enter your choice : ");
scanf("%d",&choice);
    if(choice == 1){
        area_of_circle();
    }else if(choice == 2){
        area_of_triangle();
    }else if(choice == 3){
        area_of_rectangle();
    }else if(choice == 4){
        printf("Exiting\n");
    }else{
        printf("You entered invalid input\n");
    }
}
void area_of_circle(){
    float A;
    float radius,pi = 3.14;
    printf("Enter radius of circle : ");
    scanf("%f",&radius);
    A = pi*radius*radius;
    printf("The area of circle : %f",A);
}
void area_of_triangle(){
    float A;
    float base,height;
    printf("The base of triangle : ");
    scanf("%f",&base);
    printf("The height of triangle : ");
    scanf("%f",&height);
    A = base*height;
    printf("The area of triangle : %f",A*1/2);
}
void area_of_rectangle(){
    float A;
    float length,width;
    printf("The length of rectangle : ");
    scanf("%f",&length);
    printf("The width of rectangle : ");
    scanf("%f",&width);
    A = length*width;
    printf("The area of rectangle : %f",A);
}