#include<stdio.h>
int main() {
int i,start=1,sum=0,so=0;
for(i=0;i<=10;i++){
        so=start;//1,1,2,3,5
        start=sum;//1,2,3,5,8
        sum=start+so;//1,2,3,5,
printf("%i\n",sum);
}
return 0;
}
