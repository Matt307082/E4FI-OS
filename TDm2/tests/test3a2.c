#include "../lib/gestionsFichiers.h"
#include "../lib/gestionPid.h"

int main() {
    int fd = open("files/fichierTest.txt", O_RDONLY);
    if(fd == -1) {
        perror("ERROR : error while opening the file fichierTest.txt\n");
        return 1;
    }
    
    pid_t pid = fork(); 
    if(pid < 0) {
        perror("ERROR : error while forking\n");
        return 1;
    }

    char* buffer = litLigne(fd);
    if(!buffer) {
        perror("ERROR : error while reading the file\n");
        return 1;
    }

    char* str = getCharPidAndPpid(buffer);
    if(!str) {
        perror("ERROR : error while getting the string\n");
        return 1;
    }
    
    printf("%s\n", str);
    free(str);

    free(buffer);
    close(fd);
    return 0;
}