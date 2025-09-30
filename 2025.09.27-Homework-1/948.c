#include <stdio.h>

int main(int argc, char** argv){
    int k = 0;
    int n = 0;
    scanf("%d %d", &k, &n);
    printf("%d %d", ((n % k + k) / k) + ((n-1) / k), n - k*((n-1)/k));
    return 0;
}
