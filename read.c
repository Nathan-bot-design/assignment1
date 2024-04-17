#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 50
#define NUM_STUDENTS 3
#define NUM_COURSES 3

struct Student {
    char name[MAX_LENGTH];
    char regNo[MAX_LENGTH];
    char courses[NUM_COURSES][MAX_LENGTH];
};

void getStudentDetails(struct Student *student) {
    printf("Enter student name: ");
    fgets(student->name, MAX_LENGTH, stdin);
    printf("Enter registration number: ");
    fgets(student->regNo, MAX_LENGTH, stdin);
    for (int i = 0; i < NUM_COURSES; i++) {
        printf("Enter course %d: ", i + 1);
        fgets(student->courses[i], MAX_LENGTH, stdin);
    }
}

void displayStudentDetails(struct Student *student) {
    printf("\nStudent Name: %s", student->name);
    printf("Registration Number: %s", student->regNo);
    printf("Courses:\n");
    for (int i = 0; i < NUM_COURSES; i++) {
        printf("- %s", student->courses[i]);
    }
}

int main() {
    struct Student students[NUM_STUDENTS];

    // Getting details for each student
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        getStudentDetails(&students[i]);
    }

    // Displaying details of all students
    printf("\nDetails of all students:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        displayStudentDetails(&students[i]);
    }

    // Editing info for one student (for example, student 2)
    printf("\nEditing info for student 2:\n");
    getStudentDetails(&students[1]); // Editing student 2

    // Displaying updated info for student 2
    printf("\nUpdated info for student 2:\n");
    displayStudentDetails(&students[1]);

    return 0;
}
