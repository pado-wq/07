#include <stdio.h>

int all_files;

void sub(void);

int main(void)
{
    sub();
    printf("%d\n", all_files);
    return 0;
}