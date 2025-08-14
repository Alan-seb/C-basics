#include <stdio.h>
#include <stdbool.h>

struct Student {
    int roll;
    char name[20];
    float gpa;
};

int main() {
    int age = 10;
    float height = 4.5;
    char grade = 'A';
    char name[20] = "Alox";
    bool isStudent = true;

    int scores[3] = {90, 80, 70};

    struct Student s1 = {1, "Alox", 3.5};

    printf("Name: %s\n", name);
    printf("Age: %d, Height: %.1f, Grade: %c\n", age, height, grade);
    printf("Is Student: %d\n", isStudent);
    printf("Scores: %d, %d, %d\n", scores[0], scores[1], scores[2]);
    printf("Student: %d, %s, GPA: %.1f\n", s1.roll, s1.name, s1.gpa);

    return 0;
}