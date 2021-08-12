# -*- coding: utf-8 -*-
"""
Created on Thu Aug 12 15:49:00 2021

@author: MdKhurramMonirRabby
"""

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumDistances' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def minimumDistances(a):
    # Write your code here
    b=[]
    n=len(a)
    for i in range(n-1):
        for j in range(i+1,n):
            if (a[i]==a[j]):
                b.append(j-i)
                break
    
    if b:
        return (min(b))
    else:
        return (-1)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = minimumDistances(a)

    fptr.write(str(result) + '\n')

    fptr.close()
