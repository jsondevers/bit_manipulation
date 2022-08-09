#include <stdio.h>
#include <stdlib.h>

int and_operator(int x, int y){
    return x & y;
}

int or_operator(int x, int y){
    return x | y;
}

int xor_operator(int x, int y){
    return x ^ y;
}

int not_operator(int x){
    return ~x;
}

int left_shift(int x, int y){
    return x << y;
}
int right_shift(int x, int y){
    return x >> y;
}



int main(){
    int x, y = 0;
    char *c;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);
    
    printf("X & Y: %d", and_operator(x,y));
    printf("\nX | Y: %d", or_operator(x,y));
    printf("\nX ^ Y: %d", xor_operator(x,y));
    printf("\n~X: %d", not_operator(x));
    printf("\n~Y: %d", not_operator(y));
    printf("\nX >> Y: %d", right_shift(x,y));
    printf("\nX << Y: %d", left_shift(x,y));
   

    return 1;
}