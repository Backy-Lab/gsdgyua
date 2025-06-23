#include<stdio.h>

int main(){

int a[10];
int i,n=3,z=0;
//printf("enter the number : ");
//scanf("%i",&n);
for(i=0;i<n;i++)
{
printf("Element - %i : ",i);
scanf("%i",&a[i]);
}
printf("Sum of all elements stored in the array is : ");
for(i=0;i<n;i++)
z+=a[i];
printf("%i",z);
}
