#include<stdio.h>
int main(){
int l,b,p,a;
printf("Enter the Length of the rectangle :");
scanf("%d",&l);
printf("\nEnter the Breadth of the Rectangle :");
scanf("%d",&b);
p = 2*(l+b);
a = l*b;
printf("Perimeter of the rectangle = %d Inches\n",p);
printf("Area of the rectangle = %d square Inches",a);
return 0;

}
