#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int nosub = 0;
    float percentage = 0;
    float obtainedmarks = 0;

    printf("\nEnter your Name: ");
    gets(name);
    printf("\nHello %s! \nMake sure that total marks of your each subject is 100", name);
    printf("\nHow many Subjects do you have:- ");
    scanf("%d", &nosub);
    int totalmarks = nosub * 100;
    int marks[nosub];
    for (int i = 1; i <= nosub; i++)
    {
        printf("Enter a marks for subject no.%d :- ", i);
        scanf("%d", &marks[i]);
        obtainedmarks += marks[i];
    }
    printf("\n");
    // percentage Calculation
    percentage = (obtainedmarks / totalmarks) * 100;
    // printf("Congratulations %s! You Scored %.2f percentage.\n", name, percentage);

    // GPA Calculation
    float totalgpa = 0;
    float obtainedgpa = 0;
    float finalgpa = 0;

    for (int i = 1; i <= nosub; i++)
    {
        if (marks[i] >= 90)
        {
            obtainedgpa = 4;
        }
        else if (marks[i] < 90 && marks[i] >= 80)
        {
            obtainedgpa = 3.6;
        }
        else if (marks[i] < 80 && marks[i] >= 70)
        {
            obtainedgpa = 3.2;
        }
        else if (marks[i] < 70 && marks[i] >= 60)
        {
            obtainedgpa = 2.8;
        }
        else if (marks[i] < 60 && marks[i] >= 50)
        {
            obtainedgpa = 2.4;
        }
        else if (marks[i] < 50 && marks[i] >= 40)
        {
            obtainedgpa = 1.8;
        }
        else if (marks[i] < 40 && marks[i] >= 35)
        {
            obtainedgpa = 1.6;
        }
        else
        {
            obtainedgpa = 0;
        }
        totalgpa += obtainedgpa;
        printf("Subject %d GPA: %.2f\n", i, obtainedgpa);
    }
    printf("\n");
    finalgpa = (totalgpa / nosub);
    printf("Congratulations %s! You Scored %.2f GPA with %.2f %%.\n", name, finalgpa, percentage);
    return 0;
}