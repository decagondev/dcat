#include <stdio.h>
#include <stdlib.h>
#include <error.h>
#include <errno.h>

void cat_file(const char *file_path)
{
    FILE *f = fopen(file_path, "r");
    if (f == NULL) {
        fprintf(stderr, "ERROR: could not open file %s: %s\n", file_path, strerror(errno));
        exit(1);
    }
}

int main(int argc, char **argv)
{
    if (argc < 2) {
        fprintf(stderr, "Usage: dcat <files...>");
        exit(1);
    }



    return 0;
}