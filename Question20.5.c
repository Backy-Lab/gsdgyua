 #include<stdio.h>
int main() {
int P,C,M,T;
printf("Enter the Marks obtained in physics:");
scanf("%i",&P);
printf("Enter the Marks obtained in Chemistry:");
scanf("%i",&C);
printf("Enter the Marks obtained in Mathematic:");
scanf("%i",&M);
T=P+C+M;
if(M>=65){
    if(C>=50){
        if(P>=55){
            if(T=180){
                printf("The candidate is eligible for admission.");
            }
        }
    }
}

else
if(T>=140)
    {
    printf("The candidate is eligible for admission.");
}

return 0;
}

