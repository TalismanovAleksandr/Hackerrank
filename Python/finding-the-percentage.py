if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    queryResultList = student_marks[query_name]
    # print(queryResultList)
    marks_sum = 0
    for i in range(len(queryResultList)):
        marks_sum += queryResultList[i];
    print( f'{(marks_sum / len(queryResultList)):.2f}')