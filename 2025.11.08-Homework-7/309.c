#include <stdio.h>

int Election(int x, int y, int z);

int main(int argc, char* argv){
    int x = 0;
    int y = 0;
    int z = 0;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", Election(x, y, z));
    return 0;
}

int Election(int x, int y, int z){
    return (x + y + z) >= 2 ? 1 : 0;
}
