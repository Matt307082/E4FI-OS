#include "../lib/gestionsFichiers.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <fichier>\n", argv[0]);
        return 1;
    }
    
    int fd = open(argv[1], O_RDONLY);
    if(fd == -1) {
        perror("ERROR : error while opening the file\n");
        return 1;
    }

    char* buffer;
    int nblignes = 0;
    while((buffer = litLigne(fd)) != NULL) {
        nblignes++;
        free(buffer);
    }
    printf("Le fichier possède %d lignes\n", nblignes);
    close(fd);
    return 0;
}