#include <stdio.h>

int main() {
    int N[1000]; 
    int T;        
    scanf("%d", &T);
    for (int i = 0; i < 1000; i++) {
        N[i] = i % T;
    }
    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}