#include<stdio.h>
int main() {
int i,sum=0,n,j;
printf("Input number of terms :");
scanf("%i",&n);
printf("Multiplication table from 1 to 8 \n");
for(i=1;i<=n;i++){
for(j=1;j<=10;j++){
sum =i*j;
printf("%iX%i=%i\t",j,i,sum);
}
}
return 0;
}
