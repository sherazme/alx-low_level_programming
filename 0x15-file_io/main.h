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
int create_file(const char *filename, char *text_content);

int _strlen(char *str)

#endif /* MAIN_H */
