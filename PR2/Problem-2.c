#include <stdio.h>

int main()
{
    int students, subjects;

    printf("Enter number of students: ");
    scanf("%d", &students);

    if (students <= 0)
    {
        printf("Number of students must be greater than 0.\n");
        return 0;
    }

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    if (subjects <= 0)
    {
        printf("Number of subjects must be greater than 0.\n");
        return 0;
    }

    for (int j = 1; j <= students; j++)
    {
        float total_marks = 0;
        printf("\nStudent %d\n", j);

        for (int i = 1; i <= subjects; i++)
        {
            float marks_persubject;

            printf("Enter marks for subject %d: ", i);
            scanf("%f", &marks_persubject);

            if (marks_persubject < 0 || marks_persubject > 100)
            {
                printf("Invalid marks!\n");
                return 0;
            }

            total_marks += marks_persubject;
        }

        float percentage = total_marks / subjects;

        printf("Percentage: %.2f%%\n", percentage);

        if (percentage >= 80)
            printf("Result: Distinction\n");
        else if (percentage >= 60)
            printf("Result: First Class\n");
        else if (percentage >= 40)
            printf("Result: Second Class\n");
        else
            printf("Result: Fail\n");
    }

    return 0;
}
