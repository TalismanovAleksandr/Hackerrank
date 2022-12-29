if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    result_list = list()
    for i in range(0, x + 1):
        for j in range(0, y + 1):
            for k in range(0, z + 1):
                if i + j + k != n:
                    internal_list = list()
                    internal_list.append(i)
                    internal_list.append(j)
                    internal_list.append(k)
                    result_list.append(internal_list)

    print(result_list)