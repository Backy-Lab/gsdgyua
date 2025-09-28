#include<stdio.h>
#include<conio.h>

void Menu(){
 printf("\nMenu : \n1.Samosa 20/-\n2.Dosa 30/-\n3.Tea 10/-\n0.Exit\n");

 printf("\nEnter your Choice :");
}

void Get(){
printf("Enter the number of Plates :");
}
int main(){
int Num=1,PlatesS=0,PlatesD=0,PlatesT=0;
int Sum=300,Fun,S=0,D=0,T=0;
int H=500;
int F=200,Y=100;
int t=50,f=20;
int z,x,c,v,b,n,Vc;
int Mon,Re;
int B;

 printf("Welcome to XYZ Hotel");
 while(Num>0){
 Menu();

 scanf("%i",&Num);

 switch(Num){


case 1 :

     Get();
     scanf("%i",&PlatesS);
     S= S + 20*PlatesS;
     Sum=S+T+D;

    break;

case 2 :

     Get();
     scanf("%i",&PlatesD);
     D= D + 30*PlatesD;
     Sum=S+T+D;

    break;

case 3 :

     Get();
     scanf("%i",&PlatesT);
     T= T+ 10*PlatesT;
     Sum=S+T+D;

    break;

case 0 :

      printf("::Your Bill::\n");
      printf("Sr.no | item    | Qty | Rate | Sub Total \n");
      printf("----------------------------------------\n");
      if(S>0)
      printf(" 1    | Samosa  | %i   | 20   | %i/-\n",PlatesS,S);

    if(D>0){
                    if(S>0){
      printf("\v 2    | Dosa    | %i   | 30   | %i/-\n",PlatesD,D);
         }
      }

     if(D>0){
        if(S==0){
         printf("\v 1    | Dosa    | %i   | 30   | %i/-\n",PlatesD,D);
        }
     }

      if(T>0){
            if(D==0){
                    if(S>0){
      printf("\v 2    | Tea     | %i   | 10   | %i/-\n",PlatesT,T);
          }
        }
      }

       if(T>0){
            if(S==0){
                    if(D>0){
      printf("\v 2    | Tea     | %i   | 10   | %i/-\n",PlatesT,T);
          }
        }
      }

      if(T>0){
            if(D>0){
                    if(S>0){
      printf("\v 3    | Tea     | %i   | 10   | %i/-\n",PlatesT,T);
          }
        }
      }

      if(T>0){
            if(D==0){
                    if(S==0){
      printf("\v 1    | Tea     | %i   | 10   | %i/-\n",PlatesT,T);
          }
        }
      }

      printf("----------------------------------------\n");

    printf("\tGrand-Total = %i/- \n",Sum);

    printf("\nEnter your cash : ");
scanf("%i",&Mon);

//If the case is More the value;
if (Mon>Sum){
        Re=Mon-Sum;
    printf("Return %i\n",Re);
    z=Re/H;//500
    x=(Re%H)/F;//200
    c=((Re%H)%F)/Y;//100
    v=(((Re%H)%F)%Y)/t;//50
    b=((((Re%H)%F)%Y)%t)/f;//20
    n=(((((Re%H)%F)%Y)%t)%f);


                Vc=500*z;
       printf("500 Notes X %i = %i \n",z,Vc);
                Vc=200*x;
       printf("200 Notes X %i = %i \n",x,Vc);
                Vc=100*c;
       printf("100 Notes X %i = %i \n",c,Vc);
                Vc=50*v;
       printf("50  Notes X %i = %i \n",v,Vc);
                Vc=20*b;
       printf("20  Notes X %i = %i \n",b,Vc);
                Vc=10*n;
       printf("10  Notes X %i = %i \n",n,Vc);
       printf("\nT H A N K  Y O U!");

}

 if (Mon<Sum){
              Re=Sum-Mon;
    printf("Please Pay %iRs. more \n\n",Re);
    printf("Enter your cash :");
    scanf("%i",&Mon);
    while (Mon<Re){
        Re=Re-Mon;
    printf("Please Pay %iRs. more \n\n",Re);
    printf("Enter your cash :");
    scanf("%i",&Mon);
    }

            Re=Mon-Re;
        printf("return %i\n",Re);
            z=Re/H;//500
    x=(Re%H)/F;//200
    c=((Re%H)%F)/Y;//100
    v=(((Re%H)%F)%Y)/t;//50
    b=((((Re%H)%F)%Y)%t)/f;//20
    n=(((((Re%H)%F)%Y)%t)%f);//10


                Vc=500*z;
       printf("500 Notes X %i = %i \n",z,Vc);
                Vc=200*x;
       printf("200 Notes X %i = %i \n",x,Vc);
                Vc=100*c;
       printf("100 Notes X %i = %i \n",c,Vc);
                Vc=50*v;
       printf("50  Notes X %i = %i \n",v,Vc);
                Vc=20*b;
       printf("20  Notes X %i = %i \n",b,Vc);
                Vc=10*n;
       printf("10  Notes X %i = %i \n",n,Vc);
       printf("\nT H A N K  Y O U!");


 }if(Mon==Sum){
 printf("\nT H A N K  Y O U!");
 }



    return 0;

default:

    printf("Invalid Choice!");
return 0;

 }
}
return 0;
}
