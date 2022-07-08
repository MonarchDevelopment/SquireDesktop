#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./io_utils.h"

char *read_all_f(FILE *f)
{
    if (f == NULL) {
        EXIT_MEM_ERROR(f);
    }

    size_t length = DEFAULT_BLOCK_SIZE, ptr = 0;
    char *ret = (char *) malloc(sizeof(*ret) * length);
    if (ret == NULL) {
        EXIT_MEM_ERROR(ret);
    }

    for (int c = 0; c = fgetc(f), c != EOF;) {
        if (ptr + 1 >= length) {
            ret = (char *) realloc(ret, length += DEFAULT_BLOCK_SIZE);

            if (ret == NULL) {
                EXIT_MEM_ERROR(ret);
            }
        }
        ret[ptr++] = c;
    }

    if (ptr + 1 >= length) {
        ret = (char *) realloc(ret, length += DEFAULT_BLOCK_SIZE);

        if (ret == NULL) {
            EXIT_MEM_ERROR(ret);
        }
    }
    ret[ptr + 1] = 0;

    return ret;
}

char *clone_std_string(std::string str)
{
    size_t len = str.size() + 1;
    char *ret = (char *) malloc(sizeof * ret * len);
    if (ret == NULL) {
        EXIT_MEM_ERROR(ret);
    }

    strncpy(ret, str.c_str(), len);
    return ret;
}

char *clone_string(char *str)
{
    size_t len = strlen(str) + 1;
    char *ret = (char *) malloc(sizeof * ret * len);
    if (ret == NULL) {
        EXIT_MEM_ERROR(ret);
    }

    strcpy(ret, str);
    return ret;
}
