#include "../lib/gestionsFichiers.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    char buffer[TAILLEBUF];

    while (1) {
        if (fgets(buffer, TAILLEBUF, stdin) == NULL) // break if EOF (Ctrl+D)
            break; 
        ecritString(1, buffer);
    }

    return 0;
}