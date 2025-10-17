#include <stdio.h>

int main(int argc, char ** argv){
    long long int a = 0;
    long long int b = 0;
    long long int c = 0;
    long long int d = 0;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    int x = -100;
    while(x <= 100){
        long long int eq = x * x * x * a + b * x * x + c * x + d;
        if (eq == 0){
            printf("%d ", x);
        }
        x++;
    }
    return 0;
}
