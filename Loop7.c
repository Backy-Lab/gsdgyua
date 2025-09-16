#include<stdio.h>
int main() {
int i,sum=0,n,j;
printf("Input number of terms :");
scanf("%i",&n);
n=n*2;
for(i=1;i<=n;i++){
        if (!(i%2==0)){
               // sum+=i;
            printf("%i ",i);
        }
}
printf("\nThe sum of odd Natural Number upto 10 terms :%i ",sum);
return 0;
}
