#include <stdio.h>

int binom(int n, int k);

int main(int argc, char* argv){
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    printf("%d", binom(n, k));
    return 0;
}

int binom(int n, int k){
    if (k == 0 || n == k){
        return 1;
    }
    else{
        return binom(n - 1, k - 1) + binom(n - 1, k);
    }
}
