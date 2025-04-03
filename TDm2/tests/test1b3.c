#include "../lib/gestionPid.h"
#include <sys/wait.h>

int main() {
    pid_t pid = fork(); 
    if(pid < 0) {
        perror("ERROR : error while forking\n");
        return 1;
    }
    if(pid > 0) {
        char* str = getCharPidAndPpid("père");
        if(!str) {
            perror("ERROR : error while getting the string\n");
            return 1;
        }
        printf("%s\n", str);
        free(str);
        wait(NULL); // ajouter cette ligne pour attendre la mort du fils avant de tuer le père
    }
    if(pid == 0) {
        char* str = getCharPidAndPpid("fils");
        if(!str) {
            perror("ERROR : error while getting the string\n");
            return 1;
        }
        printf("%s\n", str);
        free(str);
    }
    return 0;
}