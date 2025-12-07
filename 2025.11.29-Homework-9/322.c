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
    
    Point max_point = {0};
    
    for (int i = 0; i < n; i++){
        float square_dist = (float)(points[i].x * points[i].x) + (float)(points[i].y * points[i].y);
        
        if (sqrt(square_dist) > max_length){
            max_point = points[i];
            max_length = sqrt(square_dist);
        }
    }
    printf("%d %d", max_point.x, max_point.y);
    return 0;
}

