#include <stdio.h>
int main(){
    char word[100];
    printf("Enter a string : ");
    fgets(word,100,stdin);
    printf("%s",word);
    return 0;
}