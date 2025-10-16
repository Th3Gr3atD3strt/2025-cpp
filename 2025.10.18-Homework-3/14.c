#include <stdio.h>
#include <math.h>

int main(int argc, char ** argv){
    int a = 0;
    int b = 0;
    int a1 = 0;
    int b1 = 0;
    int tmp = 0;
    int ans = 1;
    int gcd = 1;
    scanf("%d %d", &a, &b);
    if (a > b){
        a = a;
        b = b;
    }
    else{
        tmp = a;
        a = b;
        b = tmp;
        tmp = 0;
    }
    a1 = a;
    b1 = b;
    while (1 > 0){
        if ((a == 1) || (b == 1)){
            a = 1;
            break;
        }
        tmp = b;
        b = a % b;
        a = tmp;
        if (b == 0){
            a = a;
            break;
        }
    }
    gcd = a;
    printf("%d", a1*b1/gcd);
}

