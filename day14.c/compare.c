#include <stdio.h>
#include <string.h>

int main() {
    char w1[100], w2[100];
    printf("Enter two strings:\n");
    if (fgets(w1, sizeof(w1), stdin) == NULL) {
        printf("Error reading first string.\n");
        return 1;
    }
    if (fgets(w2, sizeof(w2), stdin) == NULL) {
        printf("Error reading second string.\n");
        return 1;
    }
    w1[strcspn(w1, "\n")] = '\0';
    w2[strcspn(w2, "\n")] = '\0';
    if (strcmp(w1, w2) == 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
