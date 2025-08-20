#include<stdio.h>
int main(){

int a,b,c,d;
for(a=1;a<=8;a++){
        for(c=a;c<=8;c++){
                        printf(" ");
                         }
        for(b=1;b<=a;b++){
                        printf(" *");
}
printf("\n");
a++;
}
for(a=9;a>=1;a--){
        for(c=a;c<=8;c++){
                        printf(" ");
                         }
        for(b=1;b<=a;b++){
                        printf(" *");
}
printf("\n");
a--;
}
}
