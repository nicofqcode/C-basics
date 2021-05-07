#include <stdio.h>
int main(){
    int numbers[4];
    printf("Insert four numbers: ");
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("show numbers: ");
    for(int i = 0; i < 4; i++)
    {
        printf("%d \n", numbers[i]);
    }
    return 0;
}