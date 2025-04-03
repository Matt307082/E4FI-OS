#include "../lib/gestionPid.h"

int main() {
    char* str = getCharPidAndPpid("bonjour");
    if(!str) {
        perror("ERROR : error while getting the string\n");
        return 1;
    }
    printf("%s\n", str);
    free(str);
    return 0;
}