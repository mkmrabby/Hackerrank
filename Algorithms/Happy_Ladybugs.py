# -*- coding: utf-8 -*-
"""
Created on Tue Aug 24 14:27:54 2021

@author: MdKhurramMonirRabby
"""

#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter

#
# Complete the 'happyLadybugs' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING b as parameter.
#

def happyLadybugs(b):
    # Write your code here
    cnt=Counter(b)
    
    for i in set(b):
        if cnt[i]==1 and i!='_':
            return 'NO'
    if '_' not in b:
        for i in range(len(b)-1):
            if b[i]!=b[i-1] and b[i]!=b[i+1]:
                return 'NO'
    return 'YES'
 

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    g = int(input().strip())

    for g_itr in range(g):
        n = int(input().strip())

        b = input()

        result = happyLadybugs(b)

        fptr.write(result + '\n')

    fptr.close()
