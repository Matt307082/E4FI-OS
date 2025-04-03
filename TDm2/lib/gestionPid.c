#include "gestionPid.h"

char* getCharAndPid(char* string) {
    pid_t pid = getpid();
    char* pidString = malloc(strlen(string) + 30);
    if(!pidString) {
        return NULL;
    }
    int rv = sprintf(pidString, "PID : %d, string : %s", pid, string);
    if(rv == EOF) {
        return NULL;
    }
    return pidString;
}

char* getCharAndPpid(char* string) {
    pid_t ppid = getppid();
    char* ppidString = malloc(strlen(string) + 30);
    if(!ppidString) {
        return NULL;
    }
    int rv = sprintf(ppidString, "PPID : %d, string : %s", ppid, string);
    if(rv == EOF) {
        return NULL;
    }
    return ppidString;
}

char* getCharPidAndPpid(char* string) {
    pid_t pid = getpid();
    pid_t ppid = getppid();
    char* pidandppidString = malloc(strlen(string) + 50);
    if(!pidandppidString) {
        return NULL;
    }
    int rv = sprintf(pidandppidString, "PID : %d, PPID : %d, string : %s", pid, ppid, string);
    if(rv == EOF) {
        return NULL;
    }
    return pidandppidString;
}