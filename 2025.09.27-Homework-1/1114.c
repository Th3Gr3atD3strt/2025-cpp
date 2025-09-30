#include <stdio.h>

int main(int argc, char** argv){
    long long int a = 0;
    long long int b = 0;
    scanf("%lld %lld",&a, &b);
    printf("%lld", (a * b % 109 + 109) % 109 + 1);
// решение основано на знании ограничения, без иф-элс иначе никак(((
    return 0;
}
