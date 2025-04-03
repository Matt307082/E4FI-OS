#ifndef GESTIONPID_H
#define GESTIONPID_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

char* getCharAndPid(char* string);
char* getCharAndPpid(char* string);
char* getCharPidAndPpid(char* string);

#endif // GESTIONPID_H