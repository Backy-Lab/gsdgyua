#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void menu(){
printf("\n1.Add Student\n");
printf("2.Show Student\n");
printf("3.Delete Student\n");
printf("4.Update Student\n");
printf("5.Search Student\n");
printf("0.Exit\n");
printf("\n\nChoice : ");
}
int main(){
int r[100],p1[100],p2[100],p3[100],s=0,ch,t;
int s1,s2,s3;
int n,i,d,e=-1;
char name[100][50],c,newname[100];
printf("Welcome Student Management  System\n");
do
{
menu();
scanf("%i",&ch);
switch(ch){
    case 0 :
    printf("NOTE : AFTER EXITING SYSTEM ALL RECORDS IS DELETE AUTOMATICALLY......\n");
    printf("Do you want to exit?(y/n)\nchoice:");
    scanf("%s",c);
    if(c=='y'||c=='Y'){
        printf("T H A N K Y O U ! \n FOR USING SYSTEM");
        exit(0);
        }
    else
        printf("OK GOING BACK TO SYSTEM");
case 1 :
printf("Number of student : ");
scanf("%i",&n);
for(i=0;i<n;i++){
        printf("\nStudent %i\n",s+1);
        printf("\nRoll : ");
        scanf("%i",&r[s]);
        printf("Name :");
        scanf("%s",name[s]);
        printf("Marks  ");
        printf("\nPaper 1 : ");
        scanf("%i",&p1[s]);
        printf("Paper 2 : ");
        scanf("%i",&p2[s]);
        printf("Paper 3 : ");
        scanf("%i",&p3[s]);
        s++;
}
printf("\n\nRecord Save....!\n\n");
break;
case 2 :
    printf("\nRoll | Name | Paper1 | Paper2 | Paper3 | Result(Remark)\n");
    for(i=0;i<s;i++){
        t=p1[i]+p2[i]+p3[i];
        if(t>=120)
    printf("%i  |   %s   | %i     | %i     | %i      | pass\n",r[i],name[i],p1[i],p2[i],p3[i]);
    else
    printf("%i  |   %s   | %i     | %i     | %i      | fail\n",r[i],name[i],p1[i],p2[i],p3[i]);
}
printf("\n\nAll Record Show....!\n\n");
break;
case 3 :
printf("Delete Record:\nEnter Student Roll :  ");
scanf("%i",&d);
 for(i=0;i<s;i++){
    if(r[i]==d){
        e=i;
        break;
    }
    }
    if(e==-1){
     printf("The Record not found ");
    }
    else{
        printf("roll: %i\n name: %s\n",r[e],name[e]);

printf("\nDo you really want to delete this record?((y/n)\nChoice :");
scanf("%s",&c);
if(c=='y'||c=='Y'){
                    for (i=e ;i<s-1;i++){
                        r[i]=r[i+1];
                        strcpy(name[i],name[i + 1]);
                        p1[i]=p1[i+1];
                        p2[i]=p2[i+1];
                        p3[i]=p3[i+1];
                    }
                    s--;
                    e=-1;
                    printf("...OK RECORD DELETED\n");
                } else {
                    printf("...OK NO RECORD DELETED\n");
                }
}
break;
case 4 :
        printf("Update Record:\nEnter Student Roll :  ");
        scanf("%i",&d);
        for(i=0;i<s;i++) {
                if(r[i]==d){
                    e=i;
                    break;
                }
            }
            if(e==-1){
                printf("Record not found\n");}
                else{
        printf("Update\n1.Name\n2.Paper1\n3.Paper2\n4.Paper3\nChoice : ");
        scanf("%i",&ch);
        switch(ch){
                    case 1 :
                    printf("\nRoll no %i   current name is %s",r[e],name[e]);
                    printf("\nEnter New Name :");
                    scanf("%s",newname);
                    printf("\nDo you really want to change %s to %s this record?(y/n)\nChoice :",name[e],newname);
                    scanf("%s",&c);
                    if(c=='y'||c=='Y'){
                    strcpy(name[e],newname);
                                printf("...OK NAME UPDATED");
                                e=-1;}
break;
                    case 2 :
                    printf("Roll no %i current paper 1 marks : %i\n",r[e],p1[e]);
                    printf("\nEnter Updated marks : ");
                    scanf("%i",&s1);
                    printf("\nDo you really want to change %i to %i this record?(y/n)\nChoice :",p1[e],s1);
                    scanf("%s",&c);
                            if(c=='y'||c=='Y'){
                                  p1[e]=s1;
                             printf("...OK PAPER 1 UPDATED");
                             e=-1;}
                            else
                                printf("...OK NO PAPER 1 UPDATED");
                            break;
                    case 3 :
                    printf("Roll no %i current paper 2 marks : %i\n",r[e],p2[e]);
                    printf("\nEnter Updated marks : ");
                    scanf("%i",&s2);
                    printf("\nDo you really want to change %i to %i this record?((y/n)\nChoice :",p2[e],s2);
                    scanf("%s",&c);
                            if(c=='y'||c=='Y'){
                                    p2[e]=s2;
                             printf("...OK PAPER 2 UPDATED");
                             e=-1;}
                            else
                                printf("...OK NO PAPER 2 UPDATED");
                            break;
                    case 4 :
                    printf("Roll no %i current paper 3 marks : %i\n",r[e],p3[e]);
                    printf("\nEnter Updated marks : ");
                    scanf("%i",&s3);
                    printf("\nDo you really want to change %i to %i this record?((y/n)\nChoice :",p3[e],s3);
                    scanf("%s",&c);
                            if(c=='y'||c=='Y'){
                                    p3[e]=s3;
                             printf("...OK PAPER 3 UPDATED");
                             e=-1;}
                            else
                                printf("...OK NO PAPER 3 UPDATED");
                            break;
                    default :
                    printf("Invalid choice!\n");
                            break;
                            }
                            }
                    break;
case 5 :
    printf("Search :\n");
printf("1.Search By Name \n2.Search By Roll.No\nChoice : ");
scanf("%i",&ch);
switch(ch){
   case 1:
       printf("Enter the Name :");
       scanf("%s",newname);
       for(i=0;i<s;i++){
        if(strcmp(name[i],newname)==0)
    {
        t=p1[i]+p2[i]+p3[i];
        if(t>=120)
printf("%i  |   %s   | %i     | %i     | %i      | pass\n",r[i],name[i],p1[i],p2[i],p3[i]);
else
    printf("%i  |   %s   | %i     | %i     | %i      | fail\n",r[i],name[i],p1[i],p2[i],p3[i]);
                               }
                               else
                                printf("Record not found\n");
       }
       break;
   case 2:
       printf("Enter the Roll no :");
       scanf("%i",&d);
       for(i=0;i<s;i++){
        if(r[i]==d){
            e=i;
        break;}
       }
       if(e==-1){
                printf("Record not found\n");}
                else{
        t=p1[e]+p2[e]+p3[e];
        if(t>=120)
printf("%i  |   %s   | %i     | %i     | %i      | pass\n",r[e],name[e],p1[e],p2[e],p3[e]);
else
    printf("%i  |   %s   | %i     | %i     | %i      | fail\n",r[e],name[e],p1[e],p2[e],p3[e]);}
e=-1;
break;
default :
printf("Invalid choice!\n");
break;
}
break;
default :
printf("Invalid choice!\n");
}
}while(ch);
return 0;
}
