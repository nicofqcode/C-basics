//Storage
#include <stdio.h>
void screen();

int main(){
    screen();
    screen();
}
void screen(){
    static int c = 1;
    c += 5;
    printf("%d ", c);
}