#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        if (!isalnum(str[left])) left++;
        else if (!isalnum(str[right])) right--;
        else if (tolower(str[left++]) != tolower(str[right--])) return 0;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("%s\n", str);
    if (isPalindrome(str)) printf("É um palíndromo.\n");
    else printf("Não é um palíndromo.\n");
    return 0;
}
