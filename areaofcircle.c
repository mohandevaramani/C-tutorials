#include<stdio.h>
int main(){
    int radius;
    printf("Enter the radius of circle: ");
    scanf("%d",&radius);
    float area=3.142*(radius*radius);
    printf("The area of circle is %f",area);
    return 0;
}