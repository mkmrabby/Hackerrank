#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumNumber' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. STRING password
#

def minimumNumber(n, password):
    # Return the minimum number of characters to make the password strong
    d=0 
    lc=0
    uc=0
    sp=0
    req=0
    
    for i in password:
        if i.isdigit():
            d=1
        elif i.islower():
            lc=1
        elif i.isupper():
            d=1            
        else:
            sp=1
    
    req=4-(d+lc+uc+sp)
    
    if (n+req<6):
        return 6-n
    else:
        return req
            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    password = input()

    answer = minimumNumber(n, password)

    fptr.write(str(answer) + '\n')

    fptr.close()
