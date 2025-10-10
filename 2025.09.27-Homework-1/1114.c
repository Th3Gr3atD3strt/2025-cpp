#include <stdio.h>

int main(int argc, char** argv){
    long long int a = 0;
    long long int b = 0;
    scanf("%lld %lld", &a, &b);
    printf("%lld", (a * b % 109 + 109) % 109 + 1);
    return 0;
}
