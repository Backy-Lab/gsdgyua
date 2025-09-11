#include<stdio.h>
int main(){
int a=5,b=3,c;
a/=b;
b%=a;
c= a>b && !(b>a);
printf("%i\n",a);
printf("%i\n",b);
printf("%i\n",c);
return 0;
}
