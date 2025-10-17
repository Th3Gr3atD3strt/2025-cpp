#include <stdio.h>

int main(int argc, char** argv){
    int a = 0;
    int max = 0;
    int second_max = 0;
    do {
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
    while (1 > 0);    
    printf("%d", second_max);
    return 0;
}
