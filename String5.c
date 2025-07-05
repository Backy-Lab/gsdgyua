#include<stdio.h>
#include<string.h>

int main(){
char name[100];
int L,S=1,i;
printf("Enter the String : ");
gets(name);
L=strlen(name);
for(i=0;i<=L;i++){
if(name[i]==' ')
        S+=1;
}

printf("the total number of words in the string is %i",S);
}
