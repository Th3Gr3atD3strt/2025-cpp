#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char ** argv){
   int n = 0;
   int a = 0;
   int b = 0;
   int c = 0;
   int d = 0;
   scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
   int arr[10000] = {};
   for (int i = 0; i < n; i++){
       arr[i] = i + 1;
   }
   int delta_1 = b - a - 1;
   for (int i = 0; i <= delta_1 / 2; i++){
       int tmp = 0;
       tmp = arr[a - 1 + i];
       arr[a - 1 + i] = arr[b - 1 - i];
       arr[b - 1 - i] = tmp;
   }
    int delta_2 = d - c - 1;
    for (int i = 0; i <= delta_2 / 2; i++){
       int tmp = 0;
       tmp = arr[c - 1 + i];
       arr[c - 1 + i] = arr[d - 1 - i];
       arr[d - 1 - i] = tmp;
   }
   for (int i = 0; i < n; i++){
       printf("%d ", arr[i]);
   }
}
