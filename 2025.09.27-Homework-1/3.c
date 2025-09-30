#include <stdio.h>

int main(int argc, char** argv){
    int long long a = 0;
    int long long arg = 0;
    scanf("%lld", &a);
    arg = a /= 10;
    printf("%lld", arg * (arg + 1) * 100 + 25);
    //Честное решение, можно было, наверное, в тупую перемножить)))
    return 0; 
}
