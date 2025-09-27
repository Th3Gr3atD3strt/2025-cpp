#include <stdio.h>

int main(int argc, char** argv){
    int a;
    int b;
    int arr[2][2] = {{1488, 1}, {1, 1}};
    scanf("%d %d", &a, &b);
    printf("%d", arr[a%b==0][b%a==0]);
    //Вы серьезно думаете, что человек без подготовки её решит
    //без if-else? Это уже не смешно.
}
