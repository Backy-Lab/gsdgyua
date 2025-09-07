#include<stdio.h>
int main(){
int a,n,c,b;
scanf("%i",&n);
for (a=1;a<=n;a++){
        for(c=1;c<=a;c++){
            printf("%i",c);
        }
        printf("\n");
}
//c= c^a;
//printf("%i\n",a);
//printf("%i\n",c);
return 0;
}
