#include <stdio.h>
#include <string.h>

struct student {
    char name[30];
    int marks[5];
};

void TotalAndAverage(struct student students[], int num, char searchName[])
{
    int d = 0;
    for (int i = 0; i < num; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            int totalMarks = 0;
            for (int j = 0; j < 5; j++) {
                totalMarks += students[i].marks[j];
            }
            float averageMarks = (float)totalMarks / 5;
            printf("Total Marks: %d\n", totalMarks);
            printf("Average Marks: %.2f\n", averageMarks);
            break;
        }
    }

    if (d==num) {
        printf("Student with name %s not found.\n", searchName);
    }
}

void main() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    struct student students[num];
    for (int i = 0; i < num; i++) 
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the marks for 5 subjects for student %d:\n", i + 1);
        for (int j = 0; j < 5; j++) 
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }

    char searchName[30];
    printf("Enter the name of the student: ");
    scanf("%s", searchName);
    TotalAndAverage(students, num, searchName);
}