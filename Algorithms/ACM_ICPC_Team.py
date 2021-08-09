# -*- coding: utf-8 -*-
"""
Created on Sun Aug  8 18:46:41 2021

@author: MdKhurramMonirRabby
"""

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'acmTeam' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts STRING_ARRAY topic as parameter.
#

def acmTeam(topics):
    maxCount = topCount = 0
    for (i, topic) in enumerate(topics):
        for j in range(i + 1, len(topics)):
            oneCount = bin(int(topic, 2) | int(topics[j], 2)).count('1')
            if oneCount > maxCount:
                maxCount = oneCount
                topCount = 1
            elif oneCount == maxCount:
                topCount += 1
    return [maxCount, topCount]
                    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    topic = []

    for _ in range(n):
        topic_item = input()
        topic.append(topic_item)

    result = acmTeam(topic)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
