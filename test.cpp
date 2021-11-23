#include <stdio.h>
#include <stdlib.h>
int main()
{
    double start = 1.2;
    int i = 0, n = 0;
    char infilename[40];
    for (i = 0; i < 10; i++)
    {
        printf("%f ms: Stimulus sent frame %d .\n", start, i + 1);
    }
}