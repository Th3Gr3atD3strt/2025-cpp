#include <stdio.h>

int main(int argc, char** argv){
    long long int a;
    long long int ans;
    scanf("%lld", &a);
    ans = (a+1)/2;
    printf("%lld", ans*ans);
    return 0;
}
