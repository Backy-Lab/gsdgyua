#include<stdio.h>
int main() {
int i,sum,n;
printf("Input number of terms :");
scanf("%i",&n);
for(i=1;i<=n;i++){
    sum = i*i*i;
printf("Number is : %i and the cube of the %i is : %i \n",i,i,sum);
}
return 0;
}
