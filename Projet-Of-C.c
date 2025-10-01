#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int roll[100], p1[100], p2[100], p3[100];
    char name[100][50];
    int count = 0;
    int choice;

    while (1) {
        printf("\nWelcome Student Management System\n\n");
        printf("1. Add Student\n2. Show Student\n3. Delete Student\n4. Update Student\n5. Search Student\n0. Exit\n\nChoice : ");
        scanf("%d", &choice);

        if (choice == 1) {
            int n;
            printf("\nNumber of Student : ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++) {
                printf("\nStudent %d\n", count + 1);
                printf("Roll : ");
                scanf("%d", &roll[count]);
                printf("Name : ");
                scanf("%s", name[count]);
                printf("Marks\n");
                printf("Paper 1: ");
                scanf("%d", &p1[count]);
                printf("Paper 2: ");
                scanf("%d", &p2[count]);
                printf("Paper 3: ");
                scanf("%d", &p3[count]);
                count++;
            }
            printf("\nRecord Save..!\n");

        } else if (choice == 2) {
            printf("\nRoll Name  Paper1 Paper2 Paper3 Total Remark\n");
            for (int i = 0; i < count; i++) {
                int total = p1[i] + p2[i] + p3[i];
                char *remark = (total >= 120) ? "Pass" : "Fail";
                printf("%d  %s  %d  %d  %d  %d  %s\n", roll[i], name[i], p1[i], p2[i], p3[i], total, remark);
            }
            printf("\nAll Record Show..!\n");

        } else if (choice == 3) {
            int r, index = -1;
            printf("\nDelete Record:\nEnter Student Roll : ");
            scanf("%d", &r);
            for (int i = 0; i < count; i++) {
                if (roll[i] == r) {
                    index = i;
                    break;
                }
            }
            if (index == -1) {
                printf("\nRecord not found!\n");
            } else {
                printf("Roll : %d\nName : %s\n", roll[index], name[index]);
                char ch;
                printf("Do You really want to delete this record? (y/n): ");
                scanf(" %c", &ch);
                if (ch == 'y' || ch == 'Y') {
                    for (int i = index; i < count - 1; i++) {
                        roll[i] = roll[i + 1];
                        strcpy(name[i], name[i + 1]);
                        p1[i] = p1[i + 1];
                        p2[i] = p2[i + 1];
                        p3[i] = p3[i + 1];
                    }
                    count--;
                    printf("...OK RECORD DELETED\n");
                } else {
                    printf("...OK NO RECORD DELETED\n");
                }
            }

        } else if (choice == 4) {
            int r, index = -1;
            printf("\nUpdate Record:\nEnter Student Roll : ");
            scanf("%d", &r);
            for (int i = 0; i < count; i++) {
                if (roll[i] == r) {
                    index = i;
                    break;
                }
            }
            if (index == -1) {
                printf("\nRecord not found!\n");
            } else {
                int ch;
                printf("\nUpdate\n1. Name\n2. Paper 1\n3. Paper 2\n4. Paper 3\nChoice : ");
                scanf("%d", &ch);
                if (ch == 1) {
                    char newName[50];
                    printf("Roll no %d Current name is %s\n", roll[index], name[index]);
                    printf("Enter new Name : ");
                    scanf("%s", newName);
                    printf("Do you really want to change %s to %s? (y/n): ", name[index], newName);
                    char yn;
                    scanf(" %c", &yn);
                    if (yn == 'y' || yn == 'Y') {
                        strcpy(name[index], newName);
                        printf("...ok Name Updated\n");
                    }
                } else if (ch == 2) {
                    printf("Enter new marks for Paper 1: ");
                    scanf("%d", &p1[index]);
                } else if (ch == 3) {
                    printf("Enter new marks for Paper 2: ");
                    scanf("%d", &p2[index]);
                } else if (ch == 4) {
                    printf("Enter new marks for Paper 3: ");
                    scanf("%d", &p3[index]);
                } else {
                    printf("Invalid Choice\n");
                }
            }

        } else if (choice == 5) {
            int ch;
            printf("\nSearch :\n1. Search By Name\n2. Search By Roll\nChoice : ");
            scanf("%d", &ch);
            if (ch == 1) {
                char sname[50];
                printf("Enter Name : ");
                scanf("%s", sname);
                for (int i = 0; i < count; i++) {
                    if (strcmp(name[i], sname) == 0) {
                        int total = p1[i] + p2[i] + p3[i];
                        char *remark = (total >= 120) ? "Pass" : "Fail";
                        printf("%d  %s  %d  %d  %d  %d  %s\n", roll[i], name[i], p1[i], p2[i], p3[i], total, remark);
                    }
                }
            } else if (ch == 2) {
                int r, index = -1;
                printf("Enter Roll : ");
                scanf("%d", &r);
                for (int i = 0; i < count; i++) {
                    if (roll[i] == r) {
                        index = i;
                        break;
                    }
                }
                if (index != -1) {
                    int total = p1[index] + p2[index] + p3[index];
                    char *remark = (total >= 120) ? "Pass" : "Fail";
                    printf("%d  %s  %d  %d  %d  %d  %s\n", roll[index], name[index], p1[index], p2[index], p3[index], total, remark);
                } else {
                    printf("\nRecord not found!\n");
                }
            }
            printf("\nSearch Done....\n");

        } else if (choice == 0) {
            char ch;
            printf("\nNOTE : AFTER EXITING SYSTEM ALL RECORD IS DELETE AUTOMATICALLY....\n");
            printf("\nDo you want to exit?(y/n)\nchoice: ");
            scanf(" %c", &ch);
            if (ch == 'y' || ch == 'Y') {
                printf("\nT H A N K  Y O U !\nFOR USING SYSTEM\n");
                break;
            }
        } else {
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}
