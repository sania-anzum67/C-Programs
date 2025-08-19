#include <stdio.h>

struct Point {
    int x, y;
};

void display(struct Point p) {
    printf("Point: (%d, %d)\n", p.x, p.y);
}

int main() {
    struct Point pt = {3, 4};
    display(pt);
    return 0;
}
