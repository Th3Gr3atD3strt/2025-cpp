#include <stdio.h>

int main(int argc, char** argv){
    int a;
    int arr[10] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int ans;
    scanf("%d", &a);
    ans = a/10 + arr[a%10];
    printf("%d", ans);
    return 0;
    //Хотели  решение без иф-элс? 
    // А типы данных можно любые? Получите, распишитесь. 
    // P.S. Про -9 догадался потом
}
