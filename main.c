#include <stdio.h>

void update(int *a, int *b) {
    //Reterive Pointers from memory
    int n = *a;
    int m = *b;
    int z = n + m;
    int k = n - m;
    printf("%d", z);
    printf("%d", k);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
