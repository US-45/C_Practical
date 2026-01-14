#include <stdio.h>

int main()
{
    int students, subjects;

    printf("Enter number of students: ");
    scanf("%d", &students);

    if (students <= 0) {
        printf("Number of students must be greater than 0.\n");
        return 0;
    }

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    if (subjects <= 0) {
        printf("Number of subjects must be greater than 0.\n");
        return 0;
    }

    for (int j = 1; j <= students; j++)
    {
        float total_attended = 0, total_held = 0;
        printf("\nStudent %d\n\n", j);

        for (int i = 1; i <= subjects; i++)
        {
            float classesHeld_perSubject, classesAttend_perSubject;

            printf("Enter number of classes held for subject %d: ", i);
            scanf("%f", &classesHeld_perSubject);

            if (classesHeld_perSubject <= 0) {
                printf("Classes held must be greater than 0. Invalid input!\n");
                return 0;
            }

            printf("Enter number of classes attended for subject %d: ", i);
            scanf("%f", &classesAttend_perSubject);

            if (classesAttend_perSubject < 0 || classesAttend_perSubject > classesHeld_perSubject) {
                printf("Classes attended cannot be negative or greater than classes held. Error!\n");
                return 0;
            }

            float subjectWise = (classesAttend_perSubject / classesHeld_perSubject) * 100;
            printf("Attendance for subject %d: %.2f%%\n", i, subjectWise);

            total_attended += classesAttend_perSubject;
            total_held += classesHeld_perSubject;
        }

        float percentage = (total_attended / total_held) * 100;
        printf("\nOverall attendance of student %d: %.2f%%\n", j, percentage);

        if (percentage >= 75) {
            printf("Status: Allowed to give the exam\n");
        }
        else if (percentage <= 30) {
            printf("Status: Attendance too low — YOU ARE DETAINED\n");
        }
        else {
            printf("Status: Not allowed to give the exam\n");
        }
    }

    return 0;
}
