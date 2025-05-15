#include <iostream>
#include <ctime>

#define n 10000

int main() {
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    for (int i = 0; i < n; i++) {
        std::cout << i << std::endl;
    }
    end = clock();
    cpu_time_used = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << "Execution time: " << cpu_time_used << std::endl;
    return 0;
}