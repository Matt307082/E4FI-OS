#include "gestionsFichiers.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char* litDixCaracteres(int fd) {
    char* buffer = malloc(10);
    read(fd, buffer, 10);
    return buffer;
}

char* litLigne(int fd) {
    return "a";
}