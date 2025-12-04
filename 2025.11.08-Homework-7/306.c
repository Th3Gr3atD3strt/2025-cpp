#include <stdio.h>

int min (int a, int b, int c, int d);


int main(int argc, char* argv){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", min(a, b, c, d));
    return 0; 
    
}

int min (int a, int b, int c, int d){
    
    int min_1 = 0;
    int min_2 = 0;
    int answer = 0;
    min_1 = (a < b) ? a : b;
    min_2 = (c < d) ? c : d;
    answer = (min_1 < min_2)? min_1 : min_2;
    return answer;
}
