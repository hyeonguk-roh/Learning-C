#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Himjim"); // strcopy or string copy takes two parameters (end location, value of string)
    strcpy(student1.major, "Brocode Major");

    printf("%d", student1.age);

    return 0;
}