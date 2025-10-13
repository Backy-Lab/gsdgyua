#include<stdio.h>

int main(){

int m=10,n,o;
int *z;
z=&m;
printf("z stores the address of m = %d\n",z);
printf("*z stores the value of m = %d\n",*z);
printf("&m is the address of m = %d\n",&m);
printf("&n stores is the address of n = %d\n",&n);
printf("&o stores is the address of o = %d\n",&o);
printf("&z stores is the address of z = %d\n",&z);


}
