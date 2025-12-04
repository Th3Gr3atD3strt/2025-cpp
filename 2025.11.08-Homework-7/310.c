#include <stdio.h>

char* prime(long n);

int main(int argc, char* argv){
    long n = 0;
    scanf("%ld", &n);
    printf("%s", prime(n));
    return 0;
}

char* prime(long n){
    for (int i = 2; i < (long)(sqrt(n) + 1); i++){
        if (n % i == 0){
            return "composite";
        }
    }
    return "prime";
}
