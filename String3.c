#include<stdio.h>
int main(){
char name[50];
int i,l;
printf("enter the string :");
gets(name);
l=strlen(name);
for(i=0;i<l;i++){
        name[i]=' ';

        i++;
}
printf("%s",name);
return 0;

}
