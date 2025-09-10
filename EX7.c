#include<stdio.h>
int main(){
int a=9,b=1,c;
c=(a<<b);//"<<" this will increse Twice the number and ">>" this will half the number!printf("%i\n",a);
c=~a;// this " ~ " will change the sign and increse if positive and decreses if negative.
c=a&b;///(This can solve Even or Odd "a&1")//convert into binary and Multipying the Number.(0*1=0)
c=a|b;//convert into binary and Adding the Number.(0+1=1)
c=a^b;//convert into binary and EX-ORing the Number.(0 and 0 = 0,1 and 1 =0)
printf("%i\n",b);

printf("%i\n",c);
return 0;
}
