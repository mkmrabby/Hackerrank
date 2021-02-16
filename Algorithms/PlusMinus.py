#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    pos=sum(i>0 for i in arr)/len(arr)
    neg=sum(i<0 for i in arr)/len(arr)
    zero=sum(i==0 for i in arr)/len(arr)
    print(pos,neg,zero,sep="\n")

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
