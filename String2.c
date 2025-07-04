#include<stdio.h>
#include<string.h>

int main(){
char name[30];
int L;
printf("Enter the String : ");
gets(name);
L=strlen(name);
printf("The length of the String is : %i",L);
}
