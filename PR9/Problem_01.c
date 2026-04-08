#include <stdio.h>

struct Student
{
    int total_marks;
    int total_marks_obtained;
    float percentage;
};

int main()
{
    struct Student s;

    int no_of_subject;
    printf("Enter the no. of subjects: ");
    scanf("%d", &no_of_subject);

    int marks[no_of_subject];

    for (int i = 0; i < no_of_subject; i++)
    {
        printf("Enter the marks of subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }


    s.total_marks_obtained = 0;
    for (int i = 0; i < no_of_subject; i++)
    {
        s.total_marks_obtained += marks[i];
    }


    s.total_marks = no_of_subject * 100;

    
    s.percentage = (float)s.total_marks_obtained / s.total_marks * 100;

    printf("\nTotal Marks: %d\n", s.total_marks);
    printf("\nMarks Obtained: %d\n", s.total_marks_obtained);
    printf("\nPercentage: %.2f%%\n", s.percentage);

    return 0;
}