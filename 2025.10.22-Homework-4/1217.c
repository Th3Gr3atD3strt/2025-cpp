#include <stdio.h>
 
int main(int argc, char ** argv){
    int num = 0;
    int min = 100000;
    int max = -100001;
    int arr[10000] = {0};
    int current = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        scanf("%d", &current);
        arr[i] = current;
        if (current > max){
            max = current;
        }
        if (current < min){
            min = current;
        }
    }
    for (int i = 0; i < num; i++){
        if (arr[i] == max){
            arr[i] = min;
        }
    }
    for (int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
