#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

struct Student students[MAX];
int count = 0;

void addStudent() {
    printf("Enter ID: ");
    scanf("%d", &students[count].id);
    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);
    printf("Enter Age: ");
    scanf("%d", &students[count].age);
    printf("Enter marks: ");
    scanf("%f", &students[count].marks);
    count++;
    printf("Student added successfully!\n");
}

void deleteStudent() {
    int id, found = 0;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            found = 1;
            printf("Student deleted successfully.\n");
            break;
        }
    }
    if (!found)
        printf("Student not found.\n");
}

void updateStudent() {
    int id, found = 0;
    printf("Enter student ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Enter new Name: ");
            scanf(" %[^\n]", students[i].name);
            printf("Enter new Age: ");
            scanf("%d", &students[i].age);
            printf("Enter new GPA: ");
            scanf("%f", &students[i].marks);
            found = 1;
            printf("Student updated successfully.\n");
            break;
        }
    }
    if (!found)
        printf("Student not found.\n");
}

void viewStudents() {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }
    printf("\nList of Students:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Age: %d, marks: %.2f\n",
               students[i].id, students[i].name,
               students[i].age, students[i].marks);
    }
}

int main() {
    int choice;
    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n2. Delete Student\n3. Update Student\n4. View Students\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: deleteStudent(); break;
            case 3: updateStudent(); break;
            case 4: viewStudents(); break;
            case 5: printf("Exiting program.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
