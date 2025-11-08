#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int num = 0;
    scanf("%d", &num);
    int tmp = 0;
    int* arr = (int* )malloc(sizeof(int) * num);
    if (NULL != arr){
        for (int i = 0; i < num; i++){
            scanf("%d", &tmp);
            *(arr + i) = tmp;
        }
        int* left_elem_ptr = 0;
        int* right_elem_ptr = 0;
        
        for (int i = 0; i < (num / 2); i++){
            left_elem_ptr = arr + i;
            right_elem_ptr = arr + num - i - 1;
            tmp = *left_elem_ptr;
            *left_elem_ptr = *right_elem_ptr;
            *right_elem_ptr = tmp;
            
        }
        //Проверка
        for (int i = 0; i < num; i++){
            printf("%d ", *(arr + i) );
        }
        free(arr);
    }
    else{
        printf("ОС не выделяет память((((");
        return -1;
    }
    return 0;
}
