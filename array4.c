#include<stdio.h>

int main(){

int a[10];
int i,n=3;
for(i=0;i<n;i++)
{
printf("Element - %i : ",i);
scanf("%i",&a[i]);
}
printf("the value store into the array are :\n ");
if(a[0]==a[1])
        printf("the Unique element is found in the array are  : %i",a[2]);
if(a[0]==a[2])
        printf("the Unique element is found in the array are  : %i",a[1]);
if(a[1]==a[2])
        printf("the Unique element is found in the array are  : %i",a[0]);
}
