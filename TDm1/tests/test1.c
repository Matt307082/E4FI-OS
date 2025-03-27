#include "../lib/gestionsFichiers.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main() {
    int fd = open("files/fichierTest.txt", O_RDONLY);
    if(fd == -1) {
        perror("ERROR : error while opening the file fichierTest.txt\n");
        return 1;
    }

    char* buffer = litDixCaracteres(fd);
    printf("%s", buffer);

    free(buffer);
    close(fd);
    return 0;
} 