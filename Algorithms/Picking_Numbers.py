# -*- coding: utf-8 -*-
"""
Created on Tue Jun  1 23:59:02 2021

@author: Mrinmoy
"""

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pickingNumbers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def pickingNumbers(a):
    # Write your code here
    list1=[]
    for i in a:
        temp=0
        for j in a:
            if i<=j and (j-i)<=1:
                temp+=1
        list1.append(temp)
    return max(list1)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
