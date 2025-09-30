#include <stdio.h>

int main(int argc, char** argv){
    long long int a = 0;
    long long int ans = 0;
    scanf("%lld", &a);
    ans = (a + 1) / 2;
    printf("%lld", ans * ans);
    return 0;
}
