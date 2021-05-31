# -*- coding: utf-8 -*-
"""
Created on Sun May 30 22:04:07 2021

@author: Mrinmoy
"""

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the catAndMouse function below.
def catAndMouse(x, y, z):
    a = abs(x-z)
    b = abs(y-z)
    return "Cat A" if a<b else "Cat B" if b<a else "Mouse C"
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        xyz = input().split()

        x = int(xyz[0])

        y = int(xyz[1])

        z = int(xyz[2])

        result = catAndMouse(x, y, z)

        fptr.write(result + '\n')

    fptr.close()
