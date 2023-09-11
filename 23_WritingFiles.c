#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f_pointer = fopen("23_WritingFiles_subfile", "a"); // fopen(filename, filemode) filemodes: r(read), w(write), a(append)
    fprintf(f_pointer, "\nLol");
    fclose(f_pointer);

    return 0;
}