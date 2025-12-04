#include <stdio.h>

void hanoi(int num, int src, int dest){
    if (num == 1){
        printf("Disk 1 move from %d to %d \n", src, dest);
    }
    else{
        int buf = 6 - src - dest;
        hanoi(num - 1, src, buf);
        printf("Disk %d move from %d to %d \n", num, src, dest);
        hanoi(num - 1, buf, dest);
    }
}

int main(int argc, char* argv){
    int n = 0;
    scanf("%d", &n);
    hanoi(n,  1, 2);
}
