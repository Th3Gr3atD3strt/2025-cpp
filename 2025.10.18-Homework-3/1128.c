#include <stdio.h>
#include <math.h>
 
int main(int argc, char ** argv){
   long double x = 0;
   long double y = 0;
   int counter = 1;
   scanf("%Lf %Lf", &x, &y);
   
   while (x < y){
       if  (y - x > 0.000001) {          
       x = x + x / 100000 * 15000;
       counter += 1;
       }
       else{
           break;
       }
   }
   printf("%d", counter);
   return 0;
}
