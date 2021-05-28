# -*- coding: utf-8 -*-
"""
Created on Fri May 28 00:12:16 2021

@author: Mrinmoy
"""

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'theLoveLetterMystery' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#

def theLoveLetterMystery(s):
    # Write your code here
    result = 0
    i=0
    j = len(s)-1

    while(i<len(s)//2):
        result += abs( ord(s[j]) - ord(s[i]) )
        i+=1
        j-=1
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        s = input()

        result = theLoveLetterMystery(s)

        fptr.write(str(result) + '\n')

    fptr.close()
