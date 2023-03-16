#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

long long multiply(char* num1, char* num2);

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }
    char* num1 = argv[1];
    char* num2 = argv[2];
    for (int i = 0; num1[i] != '\0'; i++) {
        if (!isdigit(num1[i])) {
            printf("Error\n");
            return 98;
        }
    }
    for (int i = 0; num2[i] != '\0'; i++) {
        if (!isdigit(num2[i])) {
            printf("Error\n");
            return 98;
        }
    }
    long long result = multiply(num1, num2);
    printf("%lld\n", result);
    return 0;
}

long long multiply(char* num1, char* num2) {
    long long n1 = atoi(num1);
    long long n2 = atoi(num2);
    return n1 * n2;
}
