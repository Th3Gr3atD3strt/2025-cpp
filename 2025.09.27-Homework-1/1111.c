#include <stdio.h>

int main(int argc, char** argv){
    int a = 0;
    scanf("%d", &a);
    printf("%d", a % 100 / 10);
    return 0;
}
