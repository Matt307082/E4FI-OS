#include "../gestionsFichiers.h"
#include "../gestionsFichiers.c"
#include <stdio.h>
#include <fcntl.h>

int main() {
    int fd = open("../files/fichierTest.txt", O_RDONLY);
    char* buffer = litDixCaracteres(fd);
    printf("%s", buffer);
    return 0;
} 