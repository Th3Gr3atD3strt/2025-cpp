#include <stdio.h>
 
int main(int argc, char ** argv){
    int a1 = 0;
    int a2 = 0;
    int ans = 0;
    int f1 = 0;
    int f2 = 1;
    scanf("%d", &a2);
    while (a1 <= a2 - 1){
 
        f1 = f2;
        f2 = ans;
        ans = f1 + f2;
        ++a1;
    }
    printf("%d", ans);
    return 0;
}
