#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'insertionSort2' function below.
#
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY arr
#

def insertionSort2(n, arr):
    # Write your code here
    for i in range(1,n):
        if arr[i]<arr[i-1]:
            pos=i
            it=i-1
            while it>=0 and arr[pos]<arr[it]:               
                temp=arr[pos]
                arr[pos]=arr[it]
                arr[it]=temp
                pos-=1
                it=pos-1
        print(*arr)

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    insertionSort2(n, arr)
