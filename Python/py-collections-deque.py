# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import deque
my_deque = deque()
n = int(input())
for i in range(0, n):
    value = input()
    if value.__contains__("appendleft"):
        var = int(value.split()[1])
        my_deque.appendleft(var)
    elif value.__contains__("append"):
        var = int(value.split()[1])
        my_deque.append(var)
    elif value.__contains__("popleft"):
        my_deque.popleft()
    else:
        my_deque.pop()

for item in my_deque:
    print(item, end=" ")