#include <stdio.h>
int main(){
    int numbers[8], i, n, sum = 0, pro;
    printf("number of values: ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("Insert number %d: ",i+1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    pro = sum/n;
    printf("The average is: %d", pro);
    
    return 0;
}