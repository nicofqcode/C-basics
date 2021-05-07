//Storage
#include <stdio.h>
void screen();
int n = 5; // global variable

int main()
{
    ++n;
    screen();
    return 0;
}

void screen(){
    ++n;
    printf("n = %d", n);
}