#include <stdio.h>

float taylor(int num){
    float sum = 0;
    for(int i = 1; i<= sum; i++){
        sum = sum + (1/i);
    }
    return sum;
}

int main(){
    printf("%f", taylor(10));
}
