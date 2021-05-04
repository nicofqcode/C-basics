#include <stdio.h>
int main(){
    int points = 90;
        if(points >= 90){
            printf("Excelent!");
        } 
        else if(points > 75)
        {
            printf("Very good");
        }
        else if(points > 51)
        {
            printf("Approved");
        }
        else{
            printf("Reprobate");
        }
    
    return 0;
}