#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src) {
    char *ptr = dest;
    while (*ptr) {
        ptr++;
    }
    while (*src) {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}