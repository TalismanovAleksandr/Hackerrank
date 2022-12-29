# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import defaultdict
d = defaultdict(list)
n,m = map(int, input().split())
for i in range(1,n+1):
    d[input()].append(str(i))

#print(d)
# d = defaultdict(list)
for _ in range(m):
    w = input()
    if w in d:
        print(" ".join(d[w]))
    else:
        print(-1)