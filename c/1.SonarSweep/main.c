#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    FILE* ptr;
    char filename[100], c;
 
    ptr = fopen("input.txt", "r");
 
    if (ptr == NULL) {
        printf("file can't be opened \n");
        exit(0);
    }
 
    printf("content of the file \n");
 
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(ptr);
    }
  
    fclose(ptr);

    return 0;
}
