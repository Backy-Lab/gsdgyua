#include<stdio.h>
#include<conio.h>
int note(int z ,int x ,int c ,int v ,int b, int n){
int vc=0;
       if(z>0){
                vc=500*z;
       printf("500 Notes X %i = %i \n",z,vc);}
       if(x>0){
                vc=200*x;
       printf("200 Notes X %i = %i \n",x,vc);}
       if(c>0){
                vc=100*c;
       printf("100 Notes X %i = %i \n",c,vc);}
       if(v>0){
                vc=50*v;
       printf("50  Notes X %i = %i \n",v,vc);}
       if(b>0){
                vc=20*b;
       printf("20  Notes X %i = %i \n",b,vc);}
       if(n>0){
                vc=10*n;
       printf("10  Notes X %i = %i \n",n,vc);}
}
int cash(int re){
int h=500;
int f=200,y=100;
int t=50,u=20,g=10;
int z,x,c,v,b,n,vc=0;
    z=re/h;//500
    x=(re%h)/f;//200
    c=((re%h)%f)/y;//100
    v=(((re%h)%f)%y)/t;//50
    b=((((re%h)%f)%y)%t)/u;//20
    n=(((((re%h)%f)%y)%t)%u)/g;//10
if(re>500){
             note(z,x,c,v,b,n);
}
 if(re<=500){
             note(z,x,c,v,b,n);
}

       printf("\nT H A N K  Y O U!");
}
int order(int rate){
     int platesS ,S=0;
     printf("Enter the number of Plates :");
     scanf("%i",&platesS);
     S+= rate*platesS;
     return S;
}
void menu(){
 printf("\nMenu : \n1.Samosa 20/-\n2.Dosa 30/-\n3.Tea 10/-\n0.Exit\n");
 printf("\nEnter your Choice :");
}
int main(){
int num,platesS=0;
int sum=0,S=0,D=0,T=0;
int h=500;
int f=200,y=100;
int t=50,u=20,g=10;
int z,x,c,v,b,n,vc=0;
int mon,re;
 printf("Welcome to XYZ Hotel");
 do{
 menu();
 scanf("%i",&num);
 switch(num){
case 1 :
     S+= order(20);
    break;
case 2 :
     D+= order(30);
    break;
case 3 :
     T+= order(10);
    break;
case 0 :
      sum=S+T+D;
      printf("::Your Bill::\n");
      printf("Sr.no | item    | Qty | Rate | Sub Total \n");
      printf("----------------------------------------\n");
      if(S>0)
      printf(" 1    | Samosa  | %i   | 20   | %i/-\n",S/20,S);
      if(D>0){
                    if(S>0){
      printf("\v 2    | Dosa    | %i   | 30   | %i/-\n",D/30,D);
         }
      }
      if(D>0){
                    if(S==0){
         printf("\v 1    | Dosa    | %i   | 30   | %i/-\n",D/10,D);
         }
      }
      if(T>0){
                    if(D==0){
                                if(S>0){
      printf("\v 2    | Tea     | %i   | 10   | %i/-\n",T/10,T);
          }
        }
      }
      if(T>0){
            if(S==0){
                    if(D>0){
      printf("\v 2    | Tea     | %i   | 10   | %i/-\n",T/10,T);
          }
        }
      }
      if(T>0){
            if(D>0){
                    if(S>0){
      printf("\v 3    | Tea     | %i   | 10   | %i/-\n",T/10,T);
          }
        }
      }
      if(T>0){
            if(D==0){
                    if(S==0){
      printf("\v 1    | Tea     | %i   | 10   | %i/-\n",T/10,T);
          }
        }
      }
      printf("----------------------------------------\n");
      printf("\tGrand-Total = %i/- \n",sum);
      printf("\nEnter your cash : ");
      scanf("%i",&mon);

if (mon>sum){
    re=mon-sum;
    printf("Return %i\n",re);
    cash(re);
}
 if (mon<sum){
              re=sum-mon;
              printf("Please Pay %iRs. more \n\n",re);
              printf("Enter your cash :");
              scanf("%i",&mon);
                         while (mon<re){
                               re-=mon;
                               printf("Please Pay %iRs. more \n\n",re);
                               printf("Enter your cash :");
                               scanf("%i",&mon);
    }
        re=mon-re;
        printf("return %i\n",re);
        cash(re);
 }
if(mon==sum){
 printf("\nT H A N K  Y O U!");
 }
return 0;
default:
    printf("Invalid Choice!");
return 0;
 }
}while(num);
return 0;
}
