#include <stdio.h>

double power (double a, int n);

int main(int argc, char* argv){
    double a = 0;
    int n = 0;
    scanf("%lf %d", &a, &n);s
    printf("%f", power(a, n));
    return 0; 
}

double power (double a, int n){
    double ans = 1;
    for (int i = 0; i < n; i++){
        ans *= a;
    }
    return ans;
}
