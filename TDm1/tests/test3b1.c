#include "../lib/gestionsFichiers.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <fichier source> <fichier destination>\n", argv[0]);
        return 1;
    }
    
    int fd1 = open(argv[1], O_RDONLY);
    if(fd1 == -1) {
        perror("ERROR : error while opening the source file\n");
        return 1;
    }

    int fd2 = open(argv[2], O_WRONLY | O_CREAT, 0644);
    if(fd2 == -1) {
        perror("ERROR : error while opening the destination file\n");
        return 1;
    }

    char* buffer;
    while((buffer = litLigne(fd1)) != NULL) {
        buffer[strlen(buffer)] = '\n';
        buffer[strlen(buffer)+1] = '\0';
        ecritString(fd2, buffer);
        free(buffer);
    }
    close(fd1);
    close(fd2);
    return 0;
}