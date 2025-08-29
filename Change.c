#include <stdio.h>
#include <string.h>

void menu() {
    printf("\n1. Add Student\n");
    printf("2. Show Student\n");
    printf("3. Delete Student\n");
    printf("4. Update Student\n");
    printf("5. Search Student\n");
    printf("0. Exit\n");
    printf("\nChoice: ");
}

int main() {
    int r[100],p1[100],p2[100],p3[100],s=0,ch;
    int s1,s2,s3;
    int n,i,d,e;
    char name[100][50],c,newname[50];

    printf("Welcome to the Student Management System\n");

  SYS:do {
        menu();
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                printf("Number of students: ");
                scanf("%d", &n);
                for(i=0;i<n;i++) {
                    printf("\nStudent %d\n",s+1);
                    printf("Roll: ");
                    scanf("%d",&r[s]);
                    printf("Name: ");
                    scanf("%s",&name[s]);
                    printf("Paper 1: ");
                    scanf("%d",&p1[s]);
                    printf("Paper 2: ");
                    scanf("%d",&p2[s]);
                    printf("Paper 3: ");
                    scanf("%d",&p3[s]);
                    s++;
                }
                printf("\nRecords Saved!\n");
                break;

            case 2:
                printf("\nRoll | Name      | Paper1 | Paper2 | Paper3|\n");
                for (i = 0; i < s; i++) {
                    printf("%d  |  %s      |   %d   |   %d   |     %d|\n",r[i],name[i],p1[i],p2[i],p3[i]);
                }
                break;

            case 3:
                printf("Enter Student Roll to delete: ");
                scanf("%d",&d);
                e=-1;
                for(i=0;i<s;i++){
                    if (r[i]==d){
                        e=i;
                        break;
                    }
                }
                if(e==-1){
                    printf("Record not found.\n");
                } else {
                    printf("Roll: %d\nName: %s\n", r[e], name[e]);
                    printf("Do you really want to delete this record? (y/n): ");
                    scanf(" %c", &c);
                    if(c=='y'||c=='Y'){
                        for(i=e;i<s-1;i++){
                            r[i]=r[i+1];
                            strcpy(name[i],name[i + 1]);
                            p1[i]=p1[i+1];
                            p2[i]=p2[i+1];
                            p3[i]=p3[i+1];
                        }
                        s--;
                        printf("Record Deleted.\n");
                    } else {
                        printf("No Record Deleted.\n");
                    }
                }
                break;

            case 4:
                printf("Enter Student Roll to update: ");
                scanf("%d",&d);
                e=-1;
                for(i=0;i<s;i++){
                    if(r[i]==d){
                        e=i;
                        break;
                    }
                }
                if(e==-1){
                    printf("Record not found.\n");
                } else {
                    printf("Update:\n1. Name\n2. Paper1\n3. Paper2\n4. Paper3\nChoice: ");
                    scanf("%d",&ch);
                    switch(ch){
                        case 1:
                            printf("Current name: %s\nEnter new name: ",name[e]);
                            scanf("%s",newname);
                            printf("Confirm change to %s? (y/n): ",newname);
                            scanf(" %c",&c);
                            if(c=='y'||c=='Y'){
                                strcpy(name[e],newname);
                                printf("Name Updated.\n");
                            }
                            break;
                        case 2:
                            printf("Current Paper 1 marks: %d\nEnter new marks: ",p1[e]);
                            scanf("%d",&s1);
                            p1[e]=s1;
                            printf("Paper 1 Updated.\n");
                            break;
                        case 3:
                            printf("Current Paper 2 marks: %d\nEnter new marks: ",p2[e]);
                            scanf("%d",&s2);
                            p2[e]=s2;
                            printf("Paper 2 Updated.\n");
                            break;
                        case 4:
                            printf("Current Paper 3 marks: %d\nEnter new marks: ",p3[e]);
                            scanf("%d",&s3);
                            p3[e] = s3;
                            printf("Paper 3 Updated.\n");
                            break;
                        default:
                            printf("Invalid choice.\n");
                    }
                }
                break;
            case 5:
                printf("Search:\n1. By Name\n2. By Roll No\nChoice: ");
                scanf("%d",&ch);
                if(ch==1){
                    printf("Enter Name: ");
                    scanf("%s",&newname);
                    int found = 0;
                    for (i = 0; i < s; i++) {
                        if (strcmp(name[i], newname) == 0) {
                            printf("\nRoll | Name      | Paper1 | Paper2 | Paper3\n");
                            printf("%4d | %-10s | %6d | %6d | %6d\n", r[i], name[i], p1[i], p2[i], p3[i]);
                            found = 1;
                        }
                    }
                    if (!found)
                        printf("No student found with that name.\n");
                } else if(ch==2){
                    printf("Enter Roll No: ");
                    scanf("%d",&d);
                    e=-1;
                    for(i=0;i<s;i++){
                        if(r[i]==d){
                            e=i;
                            break;
                        }
                    }
                    if(e!=-1){
                        printf("\nRoll | Name      | Paper1 | Paper2 | Paper3\n");
                        printf("%4d | %-10s | %6d | %6d | %6d\n", r[e], name[e], p1[e], p2[e], p3[e]);
                    } else{
                        printf("Roll number not found.\n");
                    }
                } else{
                    printf("Invalid search choice.\n");
                }
                break;

            case 0:
                printf("NOTE : AFTER EXITING SYSTEM ALL RECORDS IS DELETE AUTOMATICALLY......\n");
    printf("Do you want to exit?(y/n)\nchoice:");
    scanf("%s",&c);
    if(c=='y'||c=='Y'){
        printf("T H A N K Y O U ! \n FOR USING SYSTEM");
        exit(0);
        }
    else
        printf("OK GOING BACK TO SYSTEM");
    goto SYS;
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(ch!=0);

    return 0;
}
