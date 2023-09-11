#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE *f_pointer = fopen("23_WritingFiles_subfile", "r"); // fopen(filename, filemode) filemodes: r(read), w(write), a(append)
    // fprintf(f_pointer, "Lol");
    fgets(line, 255, f_pointer);
    printf("%s", line);

    fclose(f_pointer);

    return 0;
}