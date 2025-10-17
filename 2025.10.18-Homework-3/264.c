#include <stdio.h>

int main(int argc, char ** argv){
    int ans = 0;
    int a = 0;
    int counter = 0;
    int current_temp = 1;
    int prev_temp = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        prev_temp = current_temp;
        scanf("%d", &current_temp);
        if ((prev_temp > 0) && (current_temp > 0)){        
            counter += 1;
        }
        else{
            if (current_temp > 0){
                counter = 1;
            }
            else{
                counter = 0;
            }
        }
        if (counter > ans){
            ans = counter;
        } 
    }
    printf("%d", ans);
    return 0;
}
