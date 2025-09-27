#include <stdio.h>

int main(int argc, char** argv){
    int long long a;
    int long long arg;
    scanf("%lld", &a);
    arg = (a-5)/10;
    printf("%lld", arg*(arg+1)*100 + 25);
    //Честное решение, можно было, наверное, в тупую перемножить))) 
}
