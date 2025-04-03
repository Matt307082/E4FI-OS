#include "../lib/gestionPid.h"
#include <sys/wait.h>

int main() {
    pid_t pid = fork(); 
    if(pid < 0) {
        perror("ERROR : error while forking\n");
        return 1;
    }
    if(pid > 0) {
        char* str = getCharPidAndPpid("Je suis le père");
        if(!str) {
            perror("ERROR : error while getting the string\n");
            return 1;
        }
        printf("%s\n", str);
        free(str);
        wait(NULL);
    }
    if(pid == 0) {
        execlp("./bin/test1b1", "./bin/test1b1", NULL);
    }
    return 0;
}