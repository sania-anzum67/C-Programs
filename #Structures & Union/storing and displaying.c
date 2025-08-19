#include <stdio.h>
#include <string.h>

// Structure definition
struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", emp.name); // To read string with spaces
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
