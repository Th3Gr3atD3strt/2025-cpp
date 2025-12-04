#include <stdio.h>

long double fast_power(double a, int n);

int main(int argc, char* argv){
    long double a = 0;
    int n = 0;
    scanf("%Lf %d", &a, &n);
    printf("%Lf", fast_power(a, n));
    return 0;

}

long double fast_power(double a, int n){
    long double base = a;
    long double even = a;
    long double odd = 1;
    int degree = n;
    if (degree == 0) {
        return 1;
    }
    while (degree > 1){
        if (degree % 2 == 0){
            degree /= 2;
            even *= even;
            //printf("степень %d промежуточный ответ %lf \n", degree, even);
        }
        else{
            degree /= 2;
            odd *= even;
            even = even * even;
            //printf("степень %d промежуточный ответ %lf \n", degree, even);
        }
    }
    //printf("%lf", degree);
    return even * odd;
    
}
