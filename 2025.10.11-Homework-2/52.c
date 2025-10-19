#include <stdio.h>

int main(int argc, char ** argv){
    int a = 0;
    scanf("%d", &a);
    int sum1 = 0;
    int sum2 = 0;
    sum1 = a % 10 + a / 10 % 10 + a / 100 % 10;
    sum2 = a / 1000 % 10 + a / 10000 % 10 + a / 100000 % 10;
    if (sum1 == sum2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
