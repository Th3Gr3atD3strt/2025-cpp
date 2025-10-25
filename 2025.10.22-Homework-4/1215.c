#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char ** argv){
    int n = 0;
    int closest = 10000000;
    int delta = 100000;
    int ans = 0;
    int standart = 0;
    scanf("%d", &n);
    int current = 0;
    int arr[10000] = {0};
    for (int i = 0; i < n; i++){
        scanf("%d", ¤t);
        arr[i] = current;
    }
    scanf("%d", &standart);
    for (int i = 0; i < n; i++){
        if (delta > abs(arr[i] - standart)){
            delta = abs(arr[i] - standart);
            current = arr[i];
            if (closest > current){
                closest = current;
                ans = closest;
            }
            else{
                ans = current;
                closest = current;
            }
        }
        if (delta == abs(arr[i] - standart)){
            delta = abs(arr[i] - standart);
            current = arr[i];
            if (current < closest){
                closest = current;
                ans = current;
            }
        }  
    }
    printf("%d", ans); 
    return 0;
}
