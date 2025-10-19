#include <stdio.h>

int main(int argc, char** argv){
    int a = 0;
    int ans = 0;
    int previous_num = 0;
    int current_counter = 1;
    do{
        scanf("%d", &a);
        if (a == previous_num){
            current_counter += 1;
            previous_num = a;
        }
        else{
            current_counter = 1;
            previous_num = a;
        }
        if (current_counter > ans){
            ans = current_counter;
        }  
    }
    while (a != 0);
    printf("%d", ans);
    return 0;
}
