#include<stdio.h>
int main() {
    int a[]={1,1,2,2,3,3,4,4,5};
    int i ,j,k;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        if(a[i]==a[j]){
            for(k=j;k<10;k++){
            a[j]=a[j+1];
            }
        }
    }
    for(i=0;i<5;i++){
    printf("%i",a[i]);}
};
