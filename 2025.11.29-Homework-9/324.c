#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}Point;

int main(int argc, char* argv){
    int n = 0;
    scanf("%d", &n);
    int x = 0;
    int y = 0;
    Point points[n];
    for (int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        Point point = {.x = x, .y = y};
        points[i] = point;
    }
    
    Point point1 = {0};
    Point point2 = {0};
    long double max_length = 0;
    long double current = 0;
    long double dx = 0;
    long double dy = 0;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            dx = abs(points[j].x - points[i].x);
            dy = abs(points[j].y - points[i].y);
            current = dx * dx + dy * dy;
            if (current > max_length){
                max_length = current;
            }
        
        }
    }
    long double diameter = sqrtl(max_length);
    printf("%.15Lf\n", diameter);
    return 0;
}

