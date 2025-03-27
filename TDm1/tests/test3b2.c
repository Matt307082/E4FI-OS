#include "../lib/gestionsFichiers.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <fichier>\n", argv[0]);
        return 1;
    }

    int fd = open(argv[1], O_WRONLY | O_CREAT, 0644);
    if(fd == -1) {
        perror("ERROR : error while opening the destination file\n");
        return 1;
    }

      
    ecritString(1, "ce texte ne sera pas écrit dans le fichier mais sur la sortie standard");
    close(fd);
    return 0;
}