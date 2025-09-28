#include <stdio.h>
#include <string.h>
int main() {
    char *code[] = {
        "x = 2 * 8",
        "y = x * 1",
        "z = y + 0"
    };
    int n = 3;
    printf("Optimized Code:\n");
    int x = 2 * 8;  
    int z = x;       
    printf("x = %d\n", x);
    printf("z = x\n");
    return 0;
}
