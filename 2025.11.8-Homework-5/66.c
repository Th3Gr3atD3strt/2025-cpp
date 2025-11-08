#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int num = 0;
    scanf("%d", &num);
    int tmp = 0;
    int counter = 0;
    int* arr = (int* )malloc(sizeof(int) * num);
    if (NULL != arr){
        for (int i = 0; i < num; i++){
            scanf("%d", &tmp);
            *(arr + i) = tmp;
        }
        
        for (int i = 1; i < num; i++){
            if (*(arr + i) > *(arr + i - 1)){
                counter += 1;
            }
        }
        free(arr);
        printf("%d", counter);
    }
    else{
        printf("ОС не выделяет память((((");
        return -1;
    }
    return 0;
}
