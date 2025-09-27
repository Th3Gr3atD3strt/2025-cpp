#include <stdio.h>
 
int main(int argc, char** argv){
    int n;
    int k;
    scanf("%d %d", &n, &k);
    printf("%d %d %d", k/n, k%n, (n-k%n)%n);
     
}
