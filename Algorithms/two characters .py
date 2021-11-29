#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'alternate' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#

def alternate(s):
    M=0     #to store the maximum length possible
    letters=list(set([x for x in s])) #form a set of letters present in the string
    
    for i in range(len(letters)):
        for j in range(i+1,len(letters)):
            #2 loops to select 2 distinct letters from the set
            # nC2 possible pairs are possible where n is the number of letters

            a,b=letters[i],letters[j] #a and b are 2 distinct letters
            t='' #make a new string by removing all other letters from it except a and b
            for x in s:
                if x in (a,b):
                    t+=x
            
            #check if the letters are alternating not adjacent letters should be same
            for k in range(len(t)-1):
                if t[k]==t[k+1]:
                    break #if adjacent letters are same this loop is broken
            #the else part executes only when the above for loop is completed
            #if it completes then it contains only alternating characters
            else:
                #update the value of M with max(M,lenght of new string)
                M=max(M,len(t))
    return M

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    l = int(input().strip())

    s = input()

    result = alternate(s)

    fptr.write(str(result) + '\n')

    fptr.close()
