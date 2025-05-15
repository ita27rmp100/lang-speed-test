#include <stdio.h>
#include <time.h>

#define n 10000

int main() {
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    for (int i = 0; i < n; i++) {
        printf("%d\n", i);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Execution time: %f\n", cpu_time_used);
    return 0;
}