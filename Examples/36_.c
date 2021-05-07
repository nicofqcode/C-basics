#include <stdio.h>
int main(){
    int a[2][2], b[2][2], result[2][2];
    printf("Insert the A array values\n ");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Insert values from array A %d%d: ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Insert the B array values\n ");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Insert values from array B %d%d: ",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("\nThe sum of array A and B: \n");
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d", result[i][j]);
            if(j == 1)
            {
                printf("\n");
            }   
        }
    }

    return 0;
}