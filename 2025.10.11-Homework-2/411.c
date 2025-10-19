#include <stdio.h>
#include <math.h>

int main(int argc, char ** argv){
    long double a = 0;
    long double b = 0;
    long double c = 0;
    scanf("%Lf %Lf %Lf", &a, &b, &c);
    long double d = b * b - (4 * a * c);
    if (a == 0){
        if ((b == 0) && (c == 0)){
            printf("-1");
        }
        else if (b == 0){
            printf("0");
        }
        else {
            printf("1 \n");
            long double ans = - c / b;
            if (fabs(ans) == 0){
                ans = fabs(ans);
            }
            printf("%Lf", - c / b);
        }
    }
    else if(d == 0){
        printf("1 \n");
        printf("%Lf", - b / (2 * a));
        
    }
    else if (d > 0){
        printf("2 \n");
        long double ans1 = (- b - (sqrt(d))) / (2 * a);
        printf("%Lf \n", ans1);
        long double ans2 = (- b + (sqrt(d))) / (2 * a);
        printf("%Lf", ans2);
    }
    else if (d < 0){
        printf("0");
    }
    return 0;
}
