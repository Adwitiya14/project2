#include <stdio.h>
int main(){
    int num;
    // get input from user
    printf("enter a number");
    scanf("%d" , &num);
    // if a number is devided by 2 then it's an even number
    if ( num % 2 == 0)
        printf("%d is even number", num);
        printf("%d is odd number", num);
    return 0;
}