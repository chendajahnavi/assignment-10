
#include <stdio.h>
struct student {
    int rollnum;
    char name[30];
    int age;
};

int main() {
    struct student s[5];
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter the details of student %d\n", i + 1);
        printf("Enter the rollnumber of student %d: ", i + 1);
        scanf("%d", &s[i].rollnum);
        printf("Enter the name of student %d: ", i + 1);
        scanf("%29s", s[i].name);
        printf("Enter the age of student %d: ", i + 1);
        scanf("%d", &s[i].age);
    }
    
    printf("Details of student 2 are:\n");
    printf("rollnumber: %d\nname: %s\nage: %d", s[1].rollnum, s[1].name, s[1].age);
     return 0;
}