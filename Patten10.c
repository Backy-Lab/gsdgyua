#include<stdio.h>
int main(){

int a,b,c,d,e,f,g;
 for(a=1;a<=8;a++){
            for(c=a;c<=8;c++){
            printf(" ");
            }
            for(b=a;b<=a;b++){
            printf(" A");
            }
            for(e=3;e<=a;e++){
                    e=a;
                printf(" B");
            }
            for(f=5;f<=a;f++){
                    f=a;
                printf(" C");
            }
            for(g=7;g<=a;g++){
                     g=a;
                printf(" D");
            }
            for(f=6;f<=a;f++){
                    f=a;
                printf(" C");
            }
             for(e=4;e<=a;e++){
                    e=a;
                printf(" B");
            }
            for(d=3;d<=a;d++){
                printf(" A");
            d=a;
            }
printf("\n");
a++;
}
}
