#include<stdio.h>
int main(){
int a=5,b=3,c;
c=--a +2 + --b+ 2 + ++c +3 + 1;
printf("%i\n",a);
printf("%i\n",b);
printf("%i\n",c);
return 0;
}
