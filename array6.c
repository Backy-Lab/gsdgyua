#include<stdio.h>

int main(){

int a[3][3];
int i,j;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++){
printf("Element - a[%i],[%i] : ",i,j);
scanf("%i",&a[i][j]);
}
}
printf("\n\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++){
       printf("%i ",a[i][j]);
}
printf("\n");
}
}
