#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void menu(){
    printf("\n1. Add Student\n");
    printf("2. Show Student\n");
    printf("3. Delete Student\n");
    printf("4. Update Student\n");
    printf("5. Search Student\n");
    printf("0. Exit\n");
    printf("\nChoice: ");
}
int main(){
    int r[100],p1[100],p2[100],p3[100],s=0,ch,t;
    int s1,s2,s3;
    int n,i,d,e=-1,v=0;
    char name[100][50],c,newname[50];
    printf("Welcome Student Management System\n");
    do {
            menu();
             scanf("%i",&ch);
        switch(ch){
            case 0:
                printf("NOTE: AFTER EXITING SYSTEM ALL RECORDS IS DELETED AUTOMATICALLY...\n");
                printf("Do you want to exit? (y/n): ");
                scanf(" %c",&c);
                if(c=='y'||c=='Y'){
                    printf("THANK YOU FOR USING THE SYSTEM!\n");
                    exit(0);
                } else {
                    printf("OK, RETURNING TO SYSTEM\n");
                }
                break;
            case 1:
                printf("Number of student: ");
                scanf("%i",&n);
                for(i=0;i<n;i++){
                    printf("\nStudent %i\n",s+1);
                    printf("Roll: ");
                    scanf("%i",&r[s]);
                    printf("Name: ");
                    scanf("%s",name[s]);
                    printf("Marks:\n");
                    printf("Paper 1: ");
                    scanf("%i",&p1[s]);
                    printf("Paper 2: ");
                    scanf("%i",&p2[s]);
                    printf("Paper 3: ");
                    scanf("%i",&p3[s]);
                    s++;
                }
                printf("\nRecords Save!\n");
                break;
            case 2:
                printf("\nRoll| Name|Paper1|Paper2|Paper3|Result\n");
                for(i=0;i<s;i++){
                    t=p1[i]+p2[i]+p3[i];
                        if(t>=120)
                         printf("%i|%s|%i|%i| %i| pass\n",r[i],name[i],p1[i],p2[i],p3[i]);
                         else
                            printf("%i|%s|%i|%i| %i| fail\n",r[i],name[i],p1[i],p2[i],p3[i]);
                }
                printf("\nAll Records Show..!\n");
                break;
            case 3:
                printf("Delete Record:\nEnter Student Roll: ");
                scanf("%i",&d);
                for(i=0;i<s;i++){
                    if(r[i]==d){
                        e=i;
                        break;
                    }
                }
                if(e==-1){
                    printf("Record not found.\n");
                }else{
                    printf("Roll: %i, Name: %s\n",r[e],name[e]);
                    printf("Do you really want to delete this record? (y/n): ");
                    scanf(" %c",&c);
                    if(c=='y'||c=='Y'){
                        for(i=e;i<s-1;i++){
                            r[i]=r[i+1];
                            strcpy(name[i],name[i+1]);
                            p1[i]=p1[i+1];
                            p2[i]=p2[i+1];
                            p3[i]=p3[i+1];
                        }
                        s--;
                        printf("Record Deleted.\n");
                    } else {
                        printf("...OK No Record Deleted.\n");
                    }
                }
                break;
            case 4:
                e=-1;
                printf("Update Record:\nEnter Student Roll: ");
                scanf("%i",&d);
                for(i=0;i<s;i++) {
                    if(r[i]==d){
                        e=i;
                        break;
                    }
                }
                if(e==-1){
                    printf("Record not found.\n");
                } else {
                    printf("Update :\n1. Name\n2. Paper1\n3. Paper2\n4. Paper3\nChoice: ");
                    scanf("%i",&ch);
                    switch(ch){
                        case 1:
                            printf("Current name: %s\n",name[e]);
                            printf("Enter new name: ");
                            scanf("%s",newname);
                            printf("Do you really want to change %s to %s ?",name[e],newname);
                            printf("\nChoice (y/n): ");
                            scanf(" %c",&c);
                            if(c=='y'||c=='Y'){
                                strcpy(name[e], newname);
                                printf("..OK Name updated.\n");
                            }
                            break;
                        case 2:
                            printf("Current Paper 1 marks: %i\n",p1[e]);
                            printf("Enter new marks: ");
                            scanf("%i",&s1);
                            printf("Confirm change (y/n): ");
                            scanf(" %c",&c);
                            if(c=='y'||c=='Y'){
                                p1[e]=s1;
                                printf("Paper 1 marks updated.\n");
                            }
                            break;
                        case 3:
                            printf("Current Paper 2 marks: %i\n",p2[e]);
                            printf("Enter new marks: ");
                            scanf("%i",&s2);
                            printf("Confirm change (y/n): ");
                            scanf(" %c", &c);
                            if(c=='y'||c=='Y'){
                                p2[e]=s2;
                                printf("Paper 2 marks updated.\n");
                            }
                            break;
                        case 4:
                            printf("Current Paper 3 marks: %i\n",p3[e]);
                            printf("Enter new marks: ");
                            scanf("%i",&s3);
                            printf("Confirm change (y/n): ");
                            scanf(" %c",&c);
                            if(c=='y'||c=='Y'){
                                p3[e]=s3;
                                printf("Paper 3 marks updated.\n");
                            }
                            break;
                        default:
                            printf("Invalid update option.\n");
                           break;
                    }
                }
                break;
            case 5:
                printf("Search Options:\n1. By Name\n2. By Roll No\nChoice: ");
                scanf("%i", &ch);
                if (ch==1) {
                    printf("Enter name: ");
                    scanf("%s",newname);
                    for(i=0;i<s;i++) {
                        if(strcmp(name[i],newname)==0){
                            t=p1[i]+p2[i]+p3[i];
                            printf("\nRoll| Name|Paper1|Paper2|Paper3|Result\n");
                        if(t>=120){
                         printf("\n %i| %s| %i| %i| %i| pass\n",r[i],name[i],p1[i],p2[i],p3[i]);
                         printf("\nSearch Done..\n");}
                         else{
                            printf("\n %i| %s| %i| %i| %i| fail\n",r[i],name[i],p1[i],p2[i],p3[i]);
                            printf("\nSearch Done..\n");}
                            v=1;
                            break;
                         }
                    }
                    if(v==0)
                        printf("Record not found.\n");
                } else if(ch==2){
                    printf("Enter Roll No: ");
                    scanf("%i",&d);
                    e=-1;
                    for(i=0;i<s;i++){
                        if(r[i]==d){
                            e=i;
                            break;
                        }
                    }
                    if(e==-1){
                        printf("Record not found.\n");
                    }else{
                        t=p1[e]+p2[e]+p3[e];
                        printf("\nRoll| Name|Paper1|Paper2|Paper3|Result\n");
                        if(t>=120){
                         printf("\n %i| %s| %i| %i| %i| pass\n",r[i],name[i],p1[i],p2[i],p3[i]);
                         printf("\nSearch Done..\n");}
                         else{
                            printf("\n %i| %s| %i| %i| %i| fail\n",r[i],name[i],p1[i],p2[i],p3[i]);
                            printf("\nSearch Done..\n");}
                    }
                }else{
                    printf("Invalid option.\n");
                }
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(1);
    return 0;
}
