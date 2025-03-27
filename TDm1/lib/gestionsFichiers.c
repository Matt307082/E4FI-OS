#include "gestionsFichiers.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char* litDixCaracteres(int fd) {
    char* buffer = malloc(10);
    read(fd, buffer, 10);
    return buffer;
}

char* litLigne(int fd) {
    char* buffer = malloc(TAILLEBUF*sizeof(char));

    int i = 0;
    char c;

    while (i < TAILLEBUF - 1) {
        int ret = read(fd, &c, 1); 
        if(ret == 0){
            break;
        }
        if (c == '\n'){
            buffer[i] = '\0';
            return buffer;
        }
        buffer[i++] = c;
    }

    if (i == 0) {
        free(buffer);
        return NULL;
    }

    buffer[i] = '\0';
    return buffer;
}

int ecritString(int fd, char* string) {
    return write(fd, string, strlen(string));
}