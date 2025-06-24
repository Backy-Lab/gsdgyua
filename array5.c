#include<stdio.h>

int main(){

int a[10];
int i,n=3;
for(i=0;i<n;i++)
{
printf("Element - %i : ",i);
scanf("%i",&a[i]);
}
if(a[0]>a[1]){
    if(a[0]<a[2]){
            if(a[2]>a[1]){
        printf("\nMaximum element is  : %i",a[2]);
        printf("\nMinimum element is  : %i",a[1]);
        }
    }
    if(a[0]>a[2]){
            if(a[2]>a[1]){
        printf("\nMaximum element is  : %i",a[0]);
        printf("\nMinimum element is  : %i",a[1]);
        }
        if(a[2]<a[1]){
        printf("\nMaximum element is  : %i",a[0]);
        printf("\nMinimum element is  : %i",a[2]);
        }
    }
}
else if(a[0]>a[2]){
    if(a[0]<a[1]){
            if(a[1]>a[2]){
        printf("\nMaximum element is  : %i",a[1]);
        printf("\nMinimum element is  : %i",a[2]);
        }
    }
    if(a[0]>a[1]){
            if(a[1]>a[2]){
        printf("\nMaximum element is  : %i",a[0]);
        printf("\nMinimum element is  : %i",a[2]);
        }
        if(a[1]<a[2]){
        printf("\nMaximum element is  : %i",a[0]);
        printf("\nMinimum element is  : %i",a[1]);
        }
    }
}
else if(a[0]<a[2]){
    if(a[2]<a[1]){
            if(a[1]>a[0]){
        printf("\nMaximum element is  : %i",a[1]);
        printf("\nMinimum element is  : %i",a[0]);
        }
    }
    if(a[2]>a[1]){
            if(a[1]>a[0]){
        printf("\nMaximum element is  : %i",a[2]);
        printf("\nMinimum element is  : %i",a[0]);
        }
        if(a[1]<a[0]){
        printf("\nMaximum element is  : %i",a[2]);
        printf("\nMinimum element is  : %i",a[1]);
        }
    }
}
else if(a[0]<a[1]){
    if(a[1]<a[2]){
            if(a[2]>a[0]){
        printf("\nMaximum element is  : %i",a[2]);
        printf("\nMinimum element is  : %i",a[0]);
        }
    }
    if(a[1]>a[2]){
            if(a[2]>a[0]){
        printf("\nMaximum element is  : %i",a[1]);
        printf("\nMinimum element is  : %i",a[0]);
        }
        if(a[2]<a[0]){
        printf("\nMaximum element is  : %i",a[1]);
        printf("\nMinimum element is  : %i",a[2]);
        }
    }
}
}
