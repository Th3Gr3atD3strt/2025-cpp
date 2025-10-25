#include <stdio.h>

int main(int argc, char ** argv){
    int num = 0;
    int ans = 0;
    int l = 0;
    int r = 0;
    int max_num = -100000;
    int max_ind = 0;
    scanf("%d", &num);
    int arr[10000] = {0};
    for (int i = 0; i < num; i++){
        int num1 = 0;
        scanf("%d", &num1);
        arr[i] = num1;
    }
    scanf("%d %d", &l, &r);
    l -= 1;
    r -= 1;
    int fnd = 0;
    scanf("%d", &fnd);
    for (int i = l; i <= r; i++){
        if (arr[i] > max_num){
            max_num = arr[i];
            max_ind = i;
        }
    }
    printf("%d %d", max_num, max_ind + 1);
    return 0;
}
