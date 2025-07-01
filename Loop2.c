#include<stdio.h>
int main() {
int i,sum=0;
printf("the first natural numbers :\n");
for(i=1;i<=7;i++){
printf("%i ",i);
sum+=i;
}
printf("\nsum = %i",sum);
return 0;
}
