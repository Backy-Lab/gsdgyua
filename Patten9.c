#include<stdio.h>
int main(){

int a,b,c,d,H=1,S;

 for(a=1;a<=5;a++){

        for(c=a;c<=5;c++){
                        printf(" ");
}
        for(b=1;b<=a;b++){
                        printf(" 1");
}
       for(S=3;S<=a;S++){

       printf(" %i",H);
       }
        for(d=2;d<=a;d++){
                d=a;
                        printf(" 1");
}
printf("\n");
}
}

/*
for(a=0;a<5;a++)
{
    for(c=0;c<5-a;c++){
        printf(" ");}

    for(b=0;b<=a;b++)
    {if(a==b)
        printf(" 1");
        else{
            printf(" %i",b+1);
            b++;
        }
    }

    printf("\n");
}
}

