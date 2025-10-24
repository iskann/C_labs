#include <stdio.h>
#include <string.h>

float def(char str[], char letter) {
    int total = 0;
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            total++;
            if (str[i] == letter) {
                count++;
            }
        }
    }
    
    if (total == 0) return 0;
    return (float)count / total * 100;
}

int main() {
    char str[100];
    char letter;
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    scanf(" %c", &letter);
    printf("%.2f", def(str, letter));
    return 0;
}
