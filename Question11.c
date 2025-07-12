#include<stdio.h>
int main (){
int a,b;
printf("Enter the value of A and B :");
scanf("%i,%i",&a,&b);
printf("a=%i;\nb=%i;\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%i;\nb=%i;",a,b);
return 0;
}
