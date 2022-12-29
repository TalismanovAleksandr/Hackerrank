#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    result = ""
    string_array = s.split(" ")
    for value in string_array:
        result = result + value[0:1].upper() + value[1:] + " "
        # print(b[0:1].upper() + b[1:5])
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()