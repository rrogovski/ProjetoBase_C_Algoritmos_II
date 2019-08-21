#include <stdio.h>

#include "test.h"

/** Area para testes
*/
void teste() {
    //printf("%d", getchar());
//    char str[10090];
//    int ch, n = 0;
//
//    while ((ch = getchar()) != EOF && n < 1000) {
//        str[n] = ch;
//        ++n;
//    }
//
//    for (int i = 0; i < n; ++i)
//        putchar(str[i]);
//
//    putchar('\n'); /* trailing '\n' needed in Standard C */

    //Poltrona polt[24];
    //printf("total array %d", sizeof(polt)/sizeof(polt[0]));
    //printf("total array %d", countArray(polt));
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
        printf("Unix-like\n");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
        printf("Win\n");
    #endif
}
