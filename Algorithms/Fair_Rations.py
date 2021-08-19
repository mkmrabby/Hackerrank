# -*- coding: utf-8 -*-
"""
Created on Thu Aug 19 12:18:37 2021

@author: MdKhurramMonirRabby
"""

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'fairRations' function below.
#
# The function is expected to return a STRING.
# The function accepts INTEGER_ARRAY B as parameter.
#

def fairRations(B):
    # Write your code here
    l=0
    for i in range(0,len(B)-1):
        if B[i]%2==1:
            B[i]+=1
            B[i+1]+=1
            l+=1
    if B[len(B)-1]%2:
        return "NO"
    else:
        return str(l*2)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    N = int(input().strip())

    B = list(map(int, input().rstrip().split()))

    result = fairRations(B)

    fptr.write(result + '\n')

    fptr.close()
