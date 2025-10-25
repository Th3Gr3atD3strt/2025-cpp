#include <stdio.h>
 
int main(int argc, char ** argv){
    int num = 0;
    int ans = 0;
    scanf("%d", &num);
    int arr[10000] = {0};
    int num1 = 0;
    for (int i = 0; i < num; i++){
        scanf("%d", &num1);
        arr[i] = num1;
    }
    int fnd = 0;
    scanf("%d", &fnd);
    for (int i = 0; i < num; i++){
        if (arr[i] == fnd){
            ans += 1;
        }
    }
    printf("%d", ans);
    return 0;
}
