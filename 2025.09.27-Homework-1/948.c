#include <stdio.h>

int main(int argc, char** argv){
    int k;
    int n;
    scanf("%d %d", &k, &n);
    int ans[2][2] = {{n/k, k}, {n/k + 1, n%k}};
    printf("%d %d", ans[!(n%k==0)][0], ans[!(n%k==0)][1]);
//Ну тут классика. А вы вообще читаете эти комментарии?  
}
