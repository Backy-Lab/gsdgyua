#include<Stdio.h>
int main(){
int T,H,M,S,D;
printf("Enter Time in Second : ");
scanf("%d",&T);
D=T/86400;
H=(T%864000)/3600;
M=((T%864000)%3600)/60;
S=((T%864000)%3600)%60;
printf("There are: \nH:M:S - %i:%i:%i:%i",D,H,M,S);
return 0;
}
