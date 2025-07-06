#include<stdio.h>
#include<string.h>

int main(){
char name[100];
int L,S=0,i,E=0;
printf("Enter the String : ");
gets(name);
L=strlen(name);
for(i=0;i<=L;i++){
if(name[i]=='A'||name[i]=='a')
    S+=1;
else if(name[i]=='E'||name[i]=='e')
    S+=1;
else if (name[i]=='I'||name[i]=='i')
    S+=1;
else if(name[i]=='O'||name[i]=='o')
    S+=1;
else if(name[i]=='U'||name[i]=='u')
    S+=1;
    else if(name[i]==1)
    E+=1;
    else if(name[i]==2)
    E+=1;
    else if(name[i]==3)
    E+=1;else if(name[i]==4)
    E+=1;else if(name[i]==5)
    E+=1;else if(name[i]==6)
    E+=1;else if(name[i]==7)
    E+=1;else if(name[i]==8)
    E+=1;else if(name[i]==9)
    E+=1;else if(name[i]==0)
    E+=1;else if(name[i]==' ')
    E+=1;else if(name[i]=='.')
    E+=1;

}
//Welcome to w3resource.com

printf("The total number of vowel in the string is :%i\nThe total number of consonant in the string is :%i",S,L-S-E);
}
