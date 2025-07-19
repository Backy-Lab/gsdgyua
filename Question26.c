#include<stdio.h>
int main() {
int a;
printf("enter the year : ");
scanf("%i",&a);
if(a%4==0)
        printf("%i is a leap year",a);

else
    printf("its not");

return 0;
}

