#include <stdio.h>

int fibo(int n);

int main(int argc, char* argv){
    int n = 0;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}

int fibo(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return fibo(n - 1) + fibo(n - 2);
    }
}
//Втупую, лень через циклы писать)
