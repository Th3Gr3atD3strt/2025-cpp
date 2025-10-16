#include <stdio.h>

int main(int argc, char ** argv){
    int max = 0;
    int second_max = 0;
    int a = 0;
    while (1 > 0){
        scanf("%d", &a);
        
        if (a == 0){
            break;
        }
        if (a > max){
            second_max = max;
            max = a;
        }
        else if (a > second_max){
            second_max = a;
        }
    }
    printf("%d", second_max);
    return 0;
}

