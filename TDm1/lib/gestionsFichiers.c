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
    char* buffer = malloc(TAILLEBUF);
    char* retour = malloc(TAILLEBUF);
    read(fd, buffer, TAILLEBUF);
    for(int i=0; i<TAILLEBUF; i++) {
        if(buffer[i] == '\n') {
            retour[i] = '\0';
            return retour;
        }
        retour[i] = buffer[i];
    }
    return retour;
}