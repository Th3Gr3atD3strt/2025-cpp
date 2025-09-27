#include <stdio.h>

int main(int argc, char** argv){
    int a;
    scanf("%d", &a);
    //Я бы от дизни офигел, если бы и тут оказались нужны long
    //long int)))))
    printf("%d", a%10);
    return 0;
}
