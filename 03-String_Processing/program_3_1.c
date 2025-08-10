/* Code showing the implementation of SUBSTRING function in C*/
#include <stdio.h>
#include <conio.h>

char *SUBSTR(char *STR, int i, int j) {
    int k, m=0;
    static char STRRES[80];
    for(k=i-1; k <= i+j-2; k++){
        STRRES[m] = STR[k];
        m = m + 1;
    }

    STRRES[m] = '\0';
    return (STRRES);
}

void main() {
    char S[80] = {"TO BE OR NOT TO BE"};
    char *SUBSTR(char*, int, int);
    // clrscr();
    // system("cls"); // On Windows
    printf("STRING = %s", S);
    printf("\n\nSUBSTRING(S, 4, 7) = %s", SUBSTR(S,4,7));
    getch();
}

