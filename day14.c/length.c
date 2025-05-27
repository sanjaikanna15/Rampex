#include <stdio.h>
#include <ctype.h>

int main() {
    char w[100];
    int i = 0, sum = 0;
    printf("Enter a string: ");
    fgets(w, sizeof(w), stdin);
    while (w[i] != '\0') {
        if (isalpha((unsigned char)w[i])) { 
            sum++;
        }
        i++;
    }
    printf("Number of characters : %d\n", sum);
    return 0;
}
