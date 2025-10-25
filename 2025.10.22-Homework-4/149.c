#include <stdio.h>
 
int main(int argc, char ** argv){
    int num = 0;
    scanf("%d", &num);
    int arr[1000] = {0};
    int current = 0;
    for (int i = 0; i < num; i++){
        scanf("%d", &current);
        arr[i] = current;
    }
    for (int i = num - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
