#include <stdio.h>

int main(int argc, char** argv){
    //Кстати, номер у задачки классный)))))
    long long int a;
    long long int b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a*b-a-b+1+1);
}
