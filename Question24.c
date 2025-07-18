#include <stdio.h>
int main (){
int a,b,c;
printf("enter the number 1,2,3 :");
scanf("%i%i%i",&a,&b,&c);
printf("1st number = %i,\t",a);
printf("2nd number = %i,\t",b);
printf("3rd number = %i\n",c);
while(a>b){
         if (a>c){
                printf("1st Number is the greatest among Three! ");
                  return 0;}
            else {
                    printf("3rd Number is the greatest among Three!");
                       return 0;}
}
while (a<b){
         if(b>c){
                printf("2nd Number is the greatest among Three! ");
                   return 0;}
            else {
                printf("3rd Number is the greatest among Three!");
                    return 0;}
    }
while(a==b){
            if (a>c){
                    printf("1st Number is the greatest among Three! ");
                       return 0;}
               else if(a==c){
                    printf("All the Three Numbers are Equal!");
                          return 0;}
                   else {
                       printf("3rd Number is the greatest among Three!");
                           return 0;}
    }
return 0;
}
