#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}Point;

int main(int argc, char* argv){
    float max_length = 0;
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
    
    float x_center = 0;
    float y_center = 0;
    
    for (int i = 0; i < n; i++){
        x_center += points[i].x;
        y_center += points[i].y;
    }
    printf("%f %f", x_center / n, y_center / n);
    return 0;
}

