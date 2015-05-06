#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRLEN 30
int main(int argc, char** argv) {
    int scelta;
    char s[MAX_STRLEN+1];
    
    printf("Inserisci una stringa (max %d, [fine] per terminare): ", MAX_STRLEN);  
    scanf("%[^\n]", s);
    while(strcmp(s, "[fine]")) {
        printf("Dove vuoi scrivere la stringa ?\n1. STDOUT\n2. STDERR\n");
        scanf("%d", &scelta);
        switch(scelta) {
            case 1:
                fprintf(stdout, "%s\n", s);
                break;
            case 2:
                fprintf(stderr, "%s\n", s);
                break;
            default:
                printf("L'opzione richiesta non e' stata effettuata\n");
        }
        printf("Inserisci una stringa (max %d, [fine] per terminare): ", MAX_STRLEN);  
        scanf("\n%[^\n]", s);
    }
    return (EXIT_SUCCESS);
}
