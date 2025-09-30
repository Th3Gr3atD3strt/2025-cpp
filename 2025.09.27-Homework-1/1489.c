#include <stdio.h>

int main(int argc, char** argv){
    //Кстати, номер у задачки классный)))))
    long long int a = 0;
    long long int b = 0;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a * b - a - b + 1 + 1);
    return 0;
}
