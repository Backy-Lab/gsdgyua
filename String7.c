#include<stdio.h>
#include<string.h>

int main(){
char s1[100],s2[100];
printf("Enter the String 1 : ");
gets(s1);
printf("\nEnter the String 2 : ");
gets(s2);
strcat(s1,s2);
printf("\n%s ",s1);
}
