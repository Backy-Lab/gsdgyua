#include<stdio.h>
int main(){
int a=5,b=3,c;
c= a-- - b - b + --b;
printf("%i\n",a);
printf("%i\n",b);
printf("%i\n",c);
return 0;
}

