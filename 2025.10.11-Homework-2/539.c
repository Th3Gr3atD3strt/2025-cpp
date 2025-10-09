#include <stdio.h>


int main(int argc, char ** argv){
    long int a = 0;
    scanf("%ld", &a);
    if (a == 1){
        printf("0");
    }
    else if (a % 2 == 0){
        printf("%ld", a / 2);
    }    
    else{
        printf("%ld", a);        
    }
    return 0;
}
