#include <stdio.h>

int calculator(int a, int b);
int main(){
    int n1, n2, resp;
    printf("Insert two numbers: ");
    scanf("%d %d", &n1, &n2);

    resp = calculator(n1, n2);
    printf("Answer = %d", resp);

    return 0;
}

int calculator(int a, int b){
    int result;
    result = a*b;
    return result;
}