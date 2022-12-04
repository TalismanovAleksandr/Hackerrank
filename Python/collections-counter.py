from collections import Counter
number_of_shoes = int(input())

line = input()
myList = [int(number) for number in line.split(' ')]
counter = Counter(myList)
number_of_customers = int(input())

sum = 0
for i in range(number_of_customers):
    customer_line = input()
    customer_array = customer_line.split(' ')
    size = int(customer_array[0])
    money = int(customer_array[1])
    if counter[size] != 0:
        sum += money
        counter[size] = counter[size] - 1

print(sum)