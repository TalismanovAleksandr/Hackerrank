# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
first_set = set(map(int, input().split()))
n2 = int(input())
second_set = set(map(int, input().split()))
third_set = first_set.union(second_set).difference(first_set.intersection(second_set))
result_list = list(third_set)
result_list.sort()
# print(third_set)
for item in result_list:
    print(item)
