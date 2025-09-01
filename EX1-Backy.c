#include<stdio.h>
int main(){


int Num=1,PlatesS=0,PlatesD=0,PlatesT=0;
int Sum=300,Fun;
int H=500;
int F=200,Y=100;
int t=50,f=20,g=10;
int z,x,c,v,b,n,Vc=0;
int Mon,Re;
int B,I=0,J=0,K=0;
/*
printf("enter==");
scanf("%i",&Re);


    z=Re/H;//500
    x=(Re%H)/F;//200
    c=((Re%H)%F)/Y;//100
    v=(((Re%H)%F)%Y)/t;//50
    b=((((Re%H)%F)%Y)%t)/f;//20
    n=(((((Re%H)%F)%Y)%t)%f)/g;//10
    P=((((((Re%H)%F)%Y)%t)%f)%g)/l;//5


    printf("500 Notes X %i = %i \n",z);
    printf("200 Notes X %i = %i \n",x);
    printf("100 Notes X %i = %i \n",c);
    printf("50  Notes X %i = %i \n",v);
    printf("20  Notes X %i = %i \n",b);
    printf("10  Notes X %i = %i \n",n);
    printf("5   Notes X %i = %i \n",P);



 */

int S=1,D=1,T=1;
          printf("::Your Bill::\n");
      printf("Sr.no | item    | Qty | Rate | Sub Total \n");
      printf("----------------------------------------\n");
      if(S>0)
      printf(" 1    | Samosa  | %i   | 20   | %i/-\n",I,S);

    if(D>0){
                    if(S>0){
      printf("\v 2    | Dosa    | %i   | 30   | %i/-\n",J,D);
         }
      }

     if(D>0){
        if(S==0){
         printf("\v 1    | Dosa    | %i   | 30   | %i/-\n",J,D);
        }
     }

      if(T>0){
            if(D==0){
                    if(S>0){
      printf("\v 2    | Tea     | %i   | 10   | %i/-\n",K,T);
          }
        }
      }

       if(T>0){
            if(S==0){
                    if(D>0){
      printf("\v 2    | Tea     | %i   | 10   | %i/-\n",K,T);
          }
        }
      }

      if(T>0){
            if(D>0){
                    if(S>0){
      printf("\v 3    | Tea     | %i   | 10   | %i/-\n",K,T);
          }
        }
      }

      if(T>0){
            if(D==0){
                    if(S==0){
      printf("\v 1    | Tea     | %i   | 10   | %i/-\n",K,T);
          }
        }
      }

      printf("----------------------------------------\n");
return 0;
}
