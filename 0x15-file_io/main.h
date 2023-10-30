#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
