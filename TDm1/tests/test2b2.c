#include "../lib/gestionsFichiers.h"
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char* argv[]) {
    int fd = open(argv[1], O_RDONLY);

    if(fd == -1) {
        perror("ERROR : error while oppening the file fichierTest.txt\n");
        return 1;
    }

    char* buffer = litLigne(fd);
    printf("%s", buffer);

    free(buffer);
    close(fd);
    return 0;
}