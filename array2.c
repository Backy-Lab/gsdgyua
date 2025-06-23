#include<stdio.h>

int main(){

int a[10];
int i,n=3;
//printf("enter the number : ");
//scanf("%i",&n);
for(i=0;i<n;i++)
{
printf("Element - %i : ",i);
scanf("%i",&a[i]);
}
printf("the value store into the array are :\n ");
for(i=0;i<n;i++)
printf("%i ",a[i]);

printf("\nthe value store into the array in reverse are :\n ");
for(i=2;i>=0;--i)
    printf("%i ",a[i]);
}
