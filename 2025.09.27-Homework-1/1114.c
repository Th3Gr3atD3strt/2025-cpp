#include <stdio.h>

int main(int argc, char** argv){
    long long int a;
    long long int b;
    long long int dist;
    long long int ans;
    scanf("%lld %lld", &a, &b);
    dist = a*b;
    ans = (109ll*100000000ll + 1 + dist)%109;
    long long int ans2[2] = {ans, 109};
    printf("%lld", ans2[ans==0]);
// решение основано на знании ограничения, без иф-элс иначе никак(((
    return 0;
}
