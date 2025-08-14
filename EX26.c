#include<stdio.h>
int main(){
int a=5,b=3,c;
c= b++ +4 +a +1 +c +b +2 - --c;
printf("%i\n",a);//5
printf("%i\n",b);//4
printf("%i\n",c);//20
return 0;
}
