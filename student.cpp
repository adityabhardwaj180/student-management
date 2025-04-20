#include<stdio.h>

#include <string.h>
 
int main(){

    int choice;

    while(true) {

        printf("\n--- Student Management System ---\n");

        printf("1. Add Student\n");

        printf("2. Delete Student\n");

        printf("3. Update Student\n");

        printf("4. Display All Students\n");

        printf("5. Exit\n");

        printf("\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);

        printf("%d \n", choice);

        switch(choice) {

            case 1: printf("addStudent()"); break;

            case 2: printf("deleteStudent()"); break;

            case 3: printf("updateStudent()"); break;

            case 4: printf("displayStudents()"); break;

            case 5: printf("return 0");

            default: printf("Invalid choice!\n");

        }

    }
 
    return 0;

}
 