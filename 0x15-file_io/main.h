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
int append_text_to_file(const char *filename, char *text_content);

int _strlen(char *str);
void exit_and_print(char *msg, char *argument, int code);
void exit_and_print_int(char *msg, int argument, int code);

#endif /* MAIN_H */
