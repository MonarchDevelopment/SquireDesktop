#pragma once
#include <stdio.h>
#include <string>
#include "../testing_h/logger.h"

#define EXIT_MEM_ERROR(mem) lprintf(LOG_ERROR, #mem " is NULL\n"); return NULL;
#define DEFAULT_BLOCK_SIZE 4095

char *read_all_f(FILE *f); // Reads a C string from a file. Binary files are not supported.
char *clone_std_string(std::string str);
char *clone_string(char *str);

