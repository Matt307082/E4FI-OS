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

    litLigne(0);
    printf("Ce texte ne sera pas lu");
    close(fd);
    return 0;
}