def count_substring(string, sub_string):
    cnt = 0
    idx = string.find(sub_string,0, len(string))
    # print(idx)
    while idx != -1:
        cnt = cnt + 1
        idx = string.find(sub_string,idx + 1, len(string))
        # print(idx)

    return cnt

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()

    count = count_substring(string, sub_string)
    print(count)