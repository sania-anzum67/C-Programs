#include <stdio.h>

union Data {
    int intVal;
    float floatVal;
    char str[20];
};

int main() {
    union Data data;

    data.intVal = 10;
    printf("Integer: %d\n", data.intVal);

    data.floatVal = 5.5;
    printf("Float: %.2f\n", data.floatVal);

    // Storing a string overwrites previous data
    sprintf(data.str, "Hello");
    printf("String: %s\n", data.str);

    // Now previous intVal and floatVal values are lost
    return 0;
}
