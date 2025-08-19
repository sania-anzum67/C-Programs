#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    char name[30];
    struct Date dob;
};

int main() {
    struct Student s = {"John", {15, 8, 2000}};
    printf("Name: %s\nDOB: %02d-%02d-%d\n", s.name, s.dob.day, s.dob.month, s.dob.year);
    return 0;
}
