#include<stdio.h>
void main()
{
float radius,diameter,circumference,area,pi=3.14;
printf("Enter the radius of the circle: \n");
scanf("%f",&radius);
if(radius>3)
{
diameter=2*radius;
circumference=2*pi*radius;
area=pi*radius*radius;
printf("Diameter= %f \n Circumference=%f \n Area=%f",diameter,circumference,area);
}
else{
    printf("Error,radius too small");
}
}
