n = int(input())
my_set = set(map(int, input().split()))
n2 = int(input())
my_set2 = set(map(int, input().split()))
print(len(my_set.difference(my_set2)))