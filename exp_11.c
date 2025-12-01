#include <stdio.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

int main() {

    /*
       Name : Altamash Ali
       CLASS : COMPS F.Y. DIVISION:- C-2
       UIN : 251P039
    */

    struct employee e;
    FILE *fp;
    int choice;

    while(1) {
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            fp = fopen("employee.txt", "a");

            printf("Enter ID: ");
            scanf("%d", &e.id);

            printf("Enter Name: ");
            scanf("%s", e.name);

            printf("Enter Salary: ");
            scanf("%f", &e.salary);

            fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);

            fclose(fp);
            printf("Employee added!\n");
        }

        else if(choice == 2) {
            fp = fopen("employee.txt", "r");

            if(fp == NULL) {
                printf("No records found!\n");
            } else {
                printf("\n--- Employee Records ---\n");
                while(fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
                    printf("ID: %d  Name: %s  Salary: %.2f\n", e.id, e.name, e.salary);
                }
                fclose(fp);
            }
        }

        else if(choice == 3) {
            printf("Exiting...");
            break;
        }

        else {
            printf("Invalid choice!");
        }
    }

    return 0;
}
