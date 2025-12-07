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
    long double max_perimeter = 0;
    long double current = 0;
    long double dx1 = 0;
    long double dx2 = 0;
    long double dx3 = 0;
    long double dy1 = 0;
    long double dy2 = 0;
    long double dy3 = 0;
    long double dist1 = 0;
    long double dist2 = 0;
    long double dist3 = 0;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                dx1 = abs(points[i].x - points[j].x);
                dx2 = abs(points[i].x - points[k].x);
                dx3 = abs(points[k].x - points[j].x);
                dy1 = abs(points[i].y - points[j].y);
                dy2 = abs(points[i].y - points[k].y);
                dy3 = abs(points[k].y - points[j].y);
                dist1 = sqrtl(dx1 * dx1 + dy1 * dy1);
                dist2 = sqrtl(dx2 * dx2 + dy2 * dy2);
                dist3 = sqrtl(dx3 * dx3 + dy3 * dy3);
                current  = dist1 + dist2 + dist3;
                if (current > max_perimeter){
                    max_perimeter = current;
                }
            }
        }
    }
    printf("%.15Lf\n", max_perimeter);
    return 0;
}
