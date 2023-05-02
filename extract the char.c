#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 100
int main() {
    char str[MAX_LENGTH];
    int counts[5] = {0};
    int i;
    printf("Enter a string:\n");
    fgets(str, MAX_LENGTH, stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            counts[0]++; 
        } else if (islower(str[i])) {
            counts[1]++; 
        } else if (isdigit(str[i])) {
            counts[2]++; 
        } else if (isspace(str[i])) {
            counts[3]++; 
        } else {
            counts[4]++; 
        }
    }
    printf("Uppercase alphabets: %d\n", counts[0]);
    printf("Lowercase alphabets: %d\n", counts[1]);
    printf("Digits: %d\n", counts[2]);
    printf("Whitespaces: %d\n", counts[3]);
    printf("Special symbols: %d\n", counts[4]);
    return 0;
}
