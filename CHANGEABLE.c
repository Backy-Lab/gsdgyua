#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int p1, p2, p3;
};

struct Student students[100];
int s=0;

void addStudent() {
    int n;
    printf("\nNumber of Student : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("\nStudent %d\n",s+1);
        printf("Roll : ");
        scanf("%d", &students[s].roll);
        printf("Name : ");
        scanf("%s", students[s].name);
        printf("Marks\n");
        printf("Paper 1: ");
        scanf("%d", &students[s].p1);
        printf("Paper 2: ");
        scanf("%d", &students[s].p2);
        printf("Paper 3: ");
        scanf("%d", &students[s].p3);
        s++;
    }
    printf("\nRecord Save..!\n");
}

void showStudent() {
    printf("\nRoll Name  Paper1 Paper2 Paper3 Result Remark\n");
    for (int i=0;i<s;i++){
        t=p1[i]+p2[i]+p3[i];
                        if(t>=120)
                         printf("%i|%s|%i|%i| %i| pass\n",r[i],name[i],p1[i],p2[i],p3[i]);
                         else
                            printf("%i|%s|%i|%i| %i| fail\n",r[i],name[i],p1[i],p2[i],p3[i]);
    }
    printf("\nAll Record Show..!\n");
}

int e (int roll) {
    for (int i=0;i<s;i++){
        if (students[i].roll == roll) {
            return i;
        }
    }
    return -1;
}

void deleteStudent() {
    int roll;
    printf("\nDelete Record:\nEnter Student Roll : ");
    scanf("%d", &roll);

    int index = findIndexByRoll(roll);
    if (index == -1) {
        printf("\nRecord not found!\n");
        return;
    }

    printf("Roll : %d\nName : %s\n", students[index].roll, students[index].name);
    printf("Do You really want to delete this record? (y/n): ");
    char ch;
    scanf(" %c", &ch);

    if (ch == 'y' || ch == 'Y') {
        for (int i = index; i < count - 1; i++) {
            students[i] = students[i + 1];
        }
        count--;
        printf("...OK RECORD DELETED\n");
    } else {
        printf("...OK NO RECORD DELETED\n");
    }
}

void updateStudent() {
    int roll;
    printf("\nUpdate Record:\nEnter Student Roll : ");
    scanf("%d", &roll);
    int index = findIndexByRoll(roll);

    if (index == -1) {
        printf("\nRecord not found!\n");
        return;
    }

    int choice;
    printf("\nUpdate\n1. Name\n2. Paper 1\n3. Paper 2\n4. Paper 3\nChoice : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            char newName[50];
            printf("Roll no %d Current name is %s\n", students[index].roll, students[index].name);
            printf("Enter new Name : ");
            scanf("%s", newName);
            printf("Do you really want to change %s to %s? (y/n): ", students[index].name, newName);
            char ch;
            scanf(" %c", &ch);
            if (ch == 'y' || ch == 'Y') {
                strcpy(students[index].name, newName);
                printf("...ok Name Updated\n");
            }
            break;
        }
        case 2:
            printf("Enter new marks for Paper 1: ");
            scanf("%d", &students[index].p1);
            break;
        case 3:
            printf("Enter new marks for Paper 2: ");
            scanf("%d", &students[index].p2);
            break;
        case 4:
            printf("Enter new marks for Paper 3: ");
            scanf("%d", &students[index].p3);
            break;
        default:
            printf("Invalid Choice\n");
    }
}

void searchStudent() {
    int choice;
    printf("\nSearch :\n1. Search By Name\n2. Search By Roll\nChoice : ");
    scanf("%d", &choice);
    if (choice == 1) {
        char name[50];
        printf("Enter Name : ");
        scanf("%s", name);
        for (int i = 0; i < count; i++) {
            if (strcmp(students[i].name, name) == 0) {
                int total = students[i].p1 + students[i].p2 + students[i].p3;
                char *remark = (total >= 120) ? "Pass" : "Fail";
                printf("%d  %s  %d  %d  %d  %d  %s\n",
                       students[i].roll, students[i].name,
                       students[i].p1, students[i].p2, students[i].p3,
                       total, remark);
            }
        }
    } else if (choice == 2) {
        int roll;
        printf("Enter Roll : ");
        scanf("%d", &roll);
        int index = findIndexByRoll(roll);
        if (index != -1) {
            int total = students[index].p1 + students[index].p2 + students[index].p3;
            char *remark = (total >= 120) ? "Pass" : "Fail";
            printf("%d  %s  %d  %d  %d  %d  %s\n",
                   students[index].roll, students[index].name,
                   students[index].p1, students[index].p2, students[index].p3,
                   total, remark);
        } else {
            printf("\nRecord not found!\n");
        }
    }
    printf("\nSearch Done....\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nWelcome Student Management System\n\n");
        printf("1. Add Student\n2. Show Student\n3. Delete Student\n4. Update Student\n5. Search Student\n0. Exit\n\nChoice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: showStudent(); break;
            case 3: deleteStudent(); break;
            case 4: updateStudent(); break;
            case 5: searchStudent(); break;
            case 0:
                printf("\nNOTE : AFTER EXITING SYSTEM ALL RECORD IS DELETE AUTOMATICALLY....\n");
                char ch;
                printf("\nDo you want to exit?(y/n)\nchoice: ");
                scanf(" %c", &ch);
                if (ch == 'y' || ch == 'Y') {
                    printf("\nT H A N K  Y O U !\nFOR USING SYSTEM\n");
                    exit(0);
                }
                break;
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}
