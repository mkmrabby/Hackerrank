# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'repeatedString' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts following parameters:
#  1. STRING s
#  2. LONG_INTEGER n
#

def repeatedString(s, n):
    # Write your code here
    c=s.count('a')
    div=n//len(s)
    
    if n%len(s)==0:
        res=c*div
    else:
        m=n%len(s)
        res=c*div+s[:m].count('a')
    
    return res

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input().strip())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
