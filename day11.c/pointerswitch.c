#include <stdio.h>

int main() {
    int value = 2;
    int *ptr = &value;

    switch (*ptr) {
        case 1:
            printf("Value is 1\n");
            break;
        case 2:
            printf("Value is 2\n");
            break;
        default:
            printf("Value is something else\n");
    }

    return 0;
}
