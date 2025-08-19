#include <stdio.h>

struct Student {
    int rollNo;
    char name[30];
    float marks;
};

int main() {
    struct Student students[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent List:\n");
    for(i = 0; i < 3; i++) {
        printf("%d\t%s\t%.2f\n", students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}
