n = int(input())
for i in range(n):
    try:
        line = input().split(" ")
        a = int(line[0])
        b = int(line[1])
        print(int(a / b))
    except ZeroDivisionError as e:
        print("Error Code: integer division or modulo by zero")
    except ValueError as v:
        print("Error Code:", v)