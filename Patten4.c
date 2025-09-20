#include<stdio.h>
int main(){

int a,b,c,S=0,n=10,m=0;
for(a=1;a<=4;a++){
for(b=1;b<=a;b++){
S=n+m;
m--;
printf(" %i ",S);
}
printf("\n");
}
}
