#ifndef GESTIONFICHIER_H
#define GESTIONFICHIER_H

#define TAILLEBUF 1024

char* litDixCaracteres(int fd);
char* litLigne(int fd);
int ecritString(int fd, char* string);

#endif // GESTIONFICHIER_H