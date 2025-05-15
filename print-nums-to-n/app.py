import time

n = 1000

start = time.perf_counter()

for i in range(n+1):
    print(i)
end = time.perf_counter()

print("Execution time:",end-start)