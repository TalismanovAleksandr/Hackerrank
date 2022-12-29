n1 = int(input())
result_set = set(map(int, input().split()))
n2 = int(input())
result_set_2 = set(map(int, input().split()))

print(len(result_set.union(result_set_2)))

# n1 = int(input())
# result_set = set()
# arr = list(map(int, input().split()))
# for i in range(0, n1):
#     # value = int(input())
#     result_set.add(arr[i])
#
# result_set_2 = set()
# n2 = int(input())
# arr2 = list(map(int, input().split()))
# for i in range(0, n2):
#     # value = int(input())
#     result_set_2.add(arr2[i])
#
# print(len(result_set.union(result_set_2)))