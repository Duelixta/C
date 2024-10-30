#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isConnector(const char *word) {
    const char *connectors[] = {"e", "do", "da", "dos", "das", "de", "di", "du"};
    for (int i = 0; i < 8; i++) {
        if (strcmp(word, connectors[i]) == 0) return 1;
    }
    return 0;
}

void printInitials(char name[]) {
    char *token = strtok(name, " ");
    while (token != NULL) {
        if (!isConnector(token)) {
            printf("%c", toupper(token[0]));
        }
        token = strtok(NULL, " ");
    }
    printf("\n");
}

int main() {
    char name[100];
    printf("Digite um nome: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printInitials(name);
    return 0;
}
