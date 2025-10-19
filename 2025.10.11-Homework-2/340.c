#include <stdio.h>
#include <stdbool.h>

int main(int argc, char ** argv){
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a11 = 0;
    int b11 = 0;
    int c11 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    int a22 = 0;
    int b22 = 0;
    int c22 = 0;
    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);
    if ((a1 >= b1) && (a1 >= c1)){
        a11 = a1;
        if (b1 >= c1){
            b11 = b1;
            c11 = c1;
        }
        else{
            b11 = c1;
            c11 = b1;
        }
    }
    else if ((b1 >= a1) && (b1 >= c1)) {
        a11 = b1;
        if (a1 >= c1){
            b11 = a1;
            c11 = c1;
        }
        else{
            b11 = c1;
            c11 = a1;
        }
    }
    else if ((c1 >= a1) && (c1 >= b1)) {
        a11 = c1;
        if (a1 >= b1){
            b11 = a1;
            c11 = b1;
        }
        else{
            b11 = b1;
            c11 = a1;
        }
    }

    if ((a2 >= b2) && (a2 >= c2)){
        a22 = a2;
        if (b2 >= c2){
            b22 = b2;
            c22 = c2;
        }
        else{
            b22 = c2;
            c22 = b2;
        }
    }
    else if ((b2 >= a2) && (b2 >= c2)) {
        a22 = b2;
        if (a2 >= c2){
            b22 = a2;
            c22 = c2;
        }
        else{
            b22 = c2;
            c22 = a2;
        }
    }
    else if ((c2 >= a2) && (c2 >= b2)) {
        a22 = c2;
        if (a2 >= b2){
            b22 = a2;
            c22 = b2;
        }
        else{
            b22 = b2;
            c22 = a2;
        }
    }
    if ((a11 == a22) && (b11 == b22) && (c11 == c22)){
        printf("Boxes are equal");
    }
    else if (((a11 * b11 * c11) >= (a22 * b22 * c22)) && (a11 >= a22) && (b11 >= b22) && (c11 >= c22)){
        printf("The first box is larger than the second one");
    }
    else if (((a11 * b11 * c11) <= (a22 * b22 * c22)) && (a11 <= a22) && (b11 <= b22) && (c11 <= c22)){
        printf("The first box is smaller than the second one");
    }
    else{
        printf("Boxes are incomparable");
    }
    return 0;
}
