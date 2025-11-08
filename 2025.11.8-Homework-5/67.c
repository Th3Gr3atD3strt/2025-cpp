#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char** argv){
    int num = 0;
    scanf("%d", &num);
    int tmp = 0;
    bool marker = false;
    int* arr = (int* )malloc(sizeof(int) * num);
    if (NULL != arr){
        for (int i = 0; i < num; i++){
            scanf("%d", &tmp);
            *(arr + i) = tmp;
        }
        
        for (int i = 1; i < num; i++){
            int prev = *(arr + i - 1);
            int curr = *(arr + i);
            
            if (((curr > 0) && (prev > 0)) || ((curr < 0) && (prev < 0))){
                marker = true;
            }
        }
        free(arr);
        if (marker){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        printf("ОС не выделяет память((((");
        return -1;
    }
    return 0;
}
