#include <stdio.h>

int main(int argc, char** argv){
    long long int a;
    long long int b;
    long long int ans;
    scanf("%lld %lld", &a, &b);
    int arr[2]={-1, 1};
    ans = (a % (b*arr[b>0]) + (b*arr[b>0]) )% (b*arr[b>0]);
    //Решение подсмотрел в инете, но у нас нету встроенного mod((((
//Сделал сам
    printf("%lld", ans);
    return 0;
}
