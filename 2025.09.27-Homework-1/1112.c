#include <stdio.h>

int main(int argc, char** argv){
    int a;
    int ans;
    scanf("%d", &a);
    ans = a%10 + a/10%10 + a/100%10;
    printf("%d", ans);
    return 0;
}
