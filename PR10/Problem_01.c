#include <stdio.h>

struct Student
{
    int roll_no;
    float marks;
    char grade;
};

union Data
{
    int roll_no;
    float marks;
    char grade;
};

int main()
{
    struct Student s;
    union Data d;

    s.roll_no = 101;
    s.marks = 85.5;
    s.grade = 'A';

    d.roll_no = 101;
    d.marks = 85.5;
    d.grade = 'A';

    printf("Structure Values:\n");
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);

    printf("\nUnion Values:\n");
    printf("Roll No: %d\n", d.roll_no);
    printf("Marks: %.2f\n", d.marks);
    printf("Grade: %c\n", d.grade);

    printf("\nSize of Structure: %lu bytes\n", sizeof(s));
    printf("Size of Union: %lu bytes\n", sizeof(d));

    return 0;
}