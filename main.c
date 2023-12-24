#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], str2[100];
    int count[256] = {0};

    printf("Enter the First string: ");
    fgets(str, 100, stdin);

    printf("Enter the Second string: ");
    fgets(str2, 100, stdin);

    int l1 = strlen(str);
    int l2 = strlen(str2);

    if (l1 != l2) {
        printf("Not an Anagram\n");
        return 0;
    }

    for (int i = 0; i < l1; i++) {
        count[tolower(str[i])]++;
        count[tolower(str2[i])]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not an Anagram\n");
            return 0;
        }
    }
    
    printf("The above string is an Anagram\n");
    return 0;
}
