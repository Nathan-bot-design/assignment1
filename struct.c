#include <stdio.h>

// Define a struct for student details
struct Student {
    char name[50];
    float maths;
    float english;
    float kiswahili;
    float total;
    float average;
    char grade;
};

int main() {
    struct Student students[6];

    // Input student details
    printf("Enter details of 6 students:\n");
    for(int i = 0; i < 6; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Maths marks: ");
        scanf("%f", &students[i].maths);
        printf("English marks: ");
        scanf("%f", &students[i].english);
        printf("Kiswahili marks: ");
        scanf("%f", &students[i].kiswahili);
        
        // Calculate total and average marks
        students[i].total = students[i].maths + students[i].english + students[i].kiswahili;
        students[i].average = students[i].total / 3;
        
        // Determine grade
        if (students[i].average >= 80)
            students[i].grade = 'A';
        else if (students[i].average >= 60 && students[i].average < 80)
            students[i].grade = 'B';
        else if (students[i].average >= 40 && students[i].average < 60)
            students[i].grade = 'C';
        else
            students[i].grade = 'D';
    }

    // Displaying student details and grades
    printf("\n\nStudent Details and Grades:\n");
    printf("Name\t\tMaths\tEnglish\tKiswahili\tTotal\tAverage\tGrade\n");
    for(int i = 0; i < 6; i++) {
        printf("%s\t\t%.2f\t%.2f\t%.2f\t\t%.2f\t%.2f\t%c\n", students[i].name, students[i].maths, students[i].english, students[i].kiswahili, students[i].total, students[i].average, students[i].grade);
    }

}