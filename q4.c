#include<stdio.h>
struct student 
{
    int regnnum;
    char name[30];
    float cgpa;
    char branch[50];
};
void linearsearch(struct student s[])
{
    int regn;
    printf("Enter regn num of any of the students: ");
    scanf("%d",&regn);
    int found=0;
    for(int i=0;i<10;i++)
    {
        if(regn==s[i].regnnum)
        {
            printf("name of the student %s",s[i].name);
            printf("\nbranch of the student %s",s[i].branch);
            printf("\ncgpa of the student %f\n",s[i].cgpa);
        }
        else
        found++;
    }
    if(found==10)
    printf("Enter a valid reggistration number");
}

void sort(struct student s[])
{
    int swap;
    struct student temp;
    for (int i = 0; i <9; i++)
    {
        swap = 0;
        for (int j = 0; j < 10-i-1; j++)
        {
            if (s[j].regnnum > s[j + 1].regnnum) 
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 0)
            break;
    }

    printf("The sorted order is:\n");
    for (int i = 0; i <10; i++)
    {
        printf("Regnnumber: %d\n", s[i].regnnum);
    }
}

int main()
{
    struct student s[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter the regnnumber of student %d: ",i+1);
        scanf("%d",&s[i].regnnum);
        printf("Enter the name of student%d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter the cgpa of student%d: ",i+1);
        scanf("%f",&s[i].cgpa);
        printf("Enter the branch of student%d: ",i+1);
        scanf("%s",s[i].branch);
    }
    linearsearch(s);
    sort(s);
    return 0;
    
}