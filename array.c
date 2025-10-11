#include<stdio.h>

int main(){

int a[9];
int i;

for(i=0;i<10;i++)
{
printf("Element -%i : ",i);
scanf("%i",&a[i]);
}
printf("Element in array are : ");
for(i=0;i<10;i++)
printf(" %i ",a[i]);

}
