#include<stdio.h>
int main() {
int i;
float sum=0, Av;
//printf("the first natural numbers :\n");
for(i=1;i<=10;i++){//printf("%i ",i);
sum+=i;
}
printf("\nThe sum of 10 no is : %.0f",sum);
Av=sum/10;
printf("\nThe Avarage is:%f",Av);
return 0;
}
