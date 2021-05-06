#include <stdio.h>
int main(){
    char calculator;
    double n1, n2;

    printf("Insert operator (+,-,*,/) ");
    scanf("%c", &calculator);

    printf("Insert number: ");
    scanf("%lf", &n1);
    printf("Insert number: ");
    scanf("%lf", &n2);

    switch(calculator){
        case '+':
        printf("%.2lf + %.2lf = %.2lf", n1,n2,n1+n2);
        break;
        case '-':
        printf("%.2lf + %.2lf = %.2lf", n1,n2,n1-n2);
        break;
        case '*':
        printf("%.2lf + %.2lf = %.2lf", n1,n2,n1*n2);
        break;
        case '/':
        printf("%.2lf + %.2lf = %.2lf", n1,n2,n1/n2);
        break;

        default:
        printf("Error");
    }

    return 0;
}