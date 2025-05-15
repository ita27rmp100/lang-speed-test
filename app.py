import time

n = 10000

start = time.time()

for i in list(range(0,n)) :
    print(i)
    i += 1
end = time.time()

print("Execution time:",end-start)