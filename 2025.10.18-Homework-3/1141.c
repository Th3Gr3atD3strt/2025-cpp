#include <stdio.h>

int main(int argc, char ** argv){
    int ans = 1;
    int cur_ctr = 1;
    int previous = 0;
    int a = 0;
    while (1 > 0){
        scanf("%d", &a);
        if (a == 0){
            break;
        }
        if (previous == a){
            cur_ctr += 1;
            if (cur_ctr > ans){
                ans = cur_ctr;
                previous = a;
            }
        }
        else{
            cur_ctr = 1;
            previous = a;
        }
    }
    printf("%d", ans);   
    return 0;
}

