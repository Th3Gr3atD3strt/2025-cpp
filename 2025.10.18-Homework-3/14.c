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
    a1 = a;
    b1 = b;
    while (b1 != 0) {
        tmp = b1;
        b1 = a1 % b1;
        a1 = tmp;
    }
    gcd = a1;
    printf("%d", a * b / gcd);
}
