#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){

char name[20],sur[20];
int Year;
printf("Enter the First Name: ");
gets(name);

printf("Enter the last name : ");
gets(sur);

printf("Enter the year of the birth: ");
scanf("%i",&Year);
printf("%s %s %i",name ,sur,Year);
return 0;
}
