//Arrays
#include <stdio.h>
const int city = 2;
const int week = 7;
int main(){
    int people[city][week];
    for (int i = 0; i < city; i++)
    {
        for(int j = 0; j < week; j++)
        {
            printf("city %d, day %d: ", i+1,j+1);
            scanf("%d", &people[i][j]);
        }
    }
    printf("\ndata: \n\n");

for(int i = 0; i < city; i++)
{
    for(int j = 0; j < week; j++)
    {
        printf("city %d, day %d: = %d\n", i+1, j+1, people[i][j]);
    }
}
return 0;
}