/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char ** argv){
    int a = 0;
    int b = 0;
    int c = 0;
    int counter = 0;
    bool flag_a = false;
    bool flag_b = false;
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0){
        flag_a = true;
        counter += 1;
    }
    else{
        printf("%d", a);
    }
    if (b < 0){
        if (b == -1){
            printf("-x");
        }
        else{
            printf("%dx", b);
        }
    }
    else{
        if (b == 0){
            flag_b = false;
            counter += 1;
        }
        else if (flag_a){
            if (b != 1){
                printf("%dx", b);
            }
            else{
                printf("x");
            }
        }
        else{
            if (b != 1){
                printf("+%dx", b);
            }
            else{
                printf("+x");
            }
        }
    }
    if (c < 0){
        if (c == -1){
            printf("-y");
        }
        else{
            printf("%dy", c);
        }
    }
    else{
        if (c == 0){
            counter += 1;
        }
        else if (flag_b){
            if (c != 1){
                printf("%dy", c);
            }
            else{
                printf("-y");
            }
        }
        else{
            if ((c != 1) && (counter != 2)){
                printf("+%dy", c);
            }
            else if((c != 1) && (counter == 2)){
                printf("%dy", c);
            }
            else{
                if (counter == 2){
                    printf("y");
                }
                else{
                    printf("+y");
                }
            }
        }
    }
    if (counter == 3){
        printf("0");
    }
    return 0;
}
