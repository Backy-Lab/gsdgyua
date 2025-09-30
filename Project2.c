#include<stdio.h>
int main(){
    int add(int n){
    int i,r;
    int add_p1[5],add_p2[5],add_p3[5],add_r[5];
    for(i=1;i<=n;i++){
        printf("\nStudent : %i",i);
        printf("\nRoll : ");
        scanf("%i",&add_r[r]);
        printf("\nName :");
        printf("\nMarks  ");
        printf("\nPaper 1 : ");
        scanf("%i",&add_p1[r]);
        printf("\nPaper 2 : ");
        scanf("%i",&add_p2[r]);
        printf("\nPaper 3 : ");
        scanf("%i",&add_p3[r]);
    }
    }
void menu(){
printf(" Welcome student Management System \n");
printf("1.Add Student\n2.Show Student\n3.Delete Student\n4.Update Student\n5.Search Student\n0.Exit\n\n");
printf("Choice : ");
}
int n,Ch,add_p1[5],add_p2[5],add_p3[5],add_r[5];
int i,r,p1,p2,p3;
menu();
scanf("%i",&Ch);

switch(Ch){
case 1:
    printf("Enter the NO. of Student : ");
    scanf("%i",n);
    add(n);


case 2:


case 3:


case 4:


case 5:


case 0:



default:

        printf("Invalid choice!");

}
}
