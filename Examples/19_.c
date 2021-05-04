/* the greater of three numbers */
#include <stdio.h>
int main(){
    int n1, n2, n3;
    int greater;
    printf("Insert the first number: ");
    scanf("%d", &n1);

    printf("Insert the second number: ");
    scanf("%d", &n2);

    printf("Insert the third number: ");
    scanf("%d", &n3);

    if(n1 > n2)
    {
        if(n1 > n3)
        {
            greater = n1;
        }
        else {
            greater = n3;
        }
    }
    else {
        if(n2 > n3)
        {
            greater = n2;
        }
        else {
            greater = n3;
        }
    }
    printf("%d is the greatest of all", greater);

    return 0;
}