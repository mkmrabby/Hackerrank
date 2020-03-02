#!/usr/bin/env python
# coding: utf-8

# # Say "Hello, World!" With Python
# Here is a sample line of code that can be executed in Python:
# 
# print("Hello, World!")
# You can just as easily store a string as a variable and then print it to stdout:
# 
# my_string = "Hello, World!"
# print(my_string)
# The above code will print Hello, World! on your screen. Try it yourself in the editor below!
# 
# Input Format
# 
# You do not need to read any input in this challenge.
# 
# Output Format
# 
# Print Hello, World! to stdout.
# 
# Sample Output 0
# 
# Hello, World!

# In[ ]:


if __name__ == '__main__':
    print("Hello, World!")


# # Arithmetic Operators
# 
# Task: Read two integers from STDIN and print three lines where:
# 
# The first line contains the sum of the two numbers.
# The second line contains the difference of the two numbers (first - second).
# The third line contains the product of the two numbers.

# In[ ]:


if __name__ == '__main__':
    a = int(raw_input('a='))
    b = int(raw_input('b='))

    #The first line contains the sum of the two numbers.
    print(a+b)
    #The second line contains the difference of the two numbers (first - second).
    print(a-b)
    #The third line contains the product of the two numbers.
    print(a*b)


# # Python: Division
# 
# Task
# Read two integers and print two lines. The first line should contain integer division,  // . The second line should contain float division,  / .
# 
# You don't need to perform any rounding or formatting operations.
# 
# Input Format
# 
# The first line contains the first integer, . The second line contains the second integer, .
# 
# Output Format
# 
# Print the two lines as described above.

# In[ ]:


## Python 2

from __future__ import division

if __name__ == '__main__':
    a = int(raw_input('a='))
    b = int(raw_input('b='))

    print a//b # integer division
    print a/b # float divisionn    


# In[ ]:


## Python 3

if __name__ == '__main__':
    a = int(input())
    b = int(input())

    print a//b # integer division
    print a/b # float division


# # Loops
# 
# Task: Read an integer . For all non-negative integers i<N, print i^2. See the sample for details.
# 
# Input Format: The first and only line contains the integer, .
# 
# Constraints: 1<=N<=20
# 
# Output Format: Print  lines, one corresponding to each .

# In[ ]:


## Python 2

if __name__ == '__main__':
    n = int(raw_input('Raw Input='))

    # For Loop
    for i in range(0,n):
        print i**2

    # While Loop
    i=0
    while i<n:
        print i**2
        i+=1
        
        
## Python 3
if __name__ == '__main__':
    n = int(raw_input('Raw Input='))

    # For Loop
    for i in range(0,n):
        print i**2

    # While Loop
    i=0
    while i<n:
        print i**2
        i+=1    


# # Python If-Else
# 
# Task
# Given an integer, , perform the following conditional actions:
# 
# If n is odd, print Weird
# If n is even and in the inclusive range of 2 to 5, print Not Weird
# If n is even and in the inclusive range of 6 to 10, print Weird
# If n is even and greater than 20, print Not Weird
# 
# Input Format: A single line containing a positive integer, n.
# 
# Constraints: 1<=n<=100
# 
# Output Format: Print Weird if the number is weird; otherwise, print Not Weird.
# 
# Sample Input 0: 3
# 
# Sample Output 0: Weird

# In[ ]:


## Python 2
#!/bin/python

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input()) #.strip(): is used to remove both the leading and the trailing character
    # Weired: if n=odd or range [6~20]
    if n%2==1 or n in range(6,21):
        print "Weird"
    # Not Weired: if n=even or range [2~5] or >20
    elif n%2==0 and (n in range(2,6) or n>20):
        print "Not Weird"


# In[ ]:


## Python 3
#!/bin/python3

import math
import os
import random
import re
import sys


if __name__ == '__main__':
    n = int(input()) #.strip(): is used to remove both the leading and the trailing character
    # Weired: if n=odd or range [6~20]
    if n%2==1 or n in range(6,21):
        print("Weird")
    # Not Weired: if n=even or range [2~5] or >20
    elif n%2==0 and (n in range(2,6) or n>20):
        print("Not Weird")         


# # Write a function
# 
# We add a Leap Day on February 29, almost every four years. The leap day is an extra, or intercalary day and we add it to the shortest month of the year, February.
# In the Gregorian calendar three criteria must be taken into account to identify leap years:
# 
# The year can be evenly divided by 4, is a leap year, unless:
# The year can be evenly divided by 100, it is NOT a leap year, unless:
# The year is also evenly divisible by 400. Then it is a leap year.
# This means that in the Gregorian calendar, the years 2000 and 2400 are leap years, while 1800, 1900, 2100, 2200, 2300 and 2500 are NOT leap years.
# 
# Task: You are given the year, and you have to write a function to check if the year is leap or not.
# 
# Note that you have to complete the function and remaining code is given as template.
# 
# Input Format: Read y, the year that needs to be checked.
# 
# Constraints: 1900 <= y <= 10^5
# 
# 
# Output Format: Output is taken care of by the template. Your function must return a boolean value (True/False)
# 
# Sample Input 0
# 1990
# 
# Sample Output 0
# False
# 
# Explanation 0
# 1990 is not a multiple of 4 hence it's not a leap year.

# In[ ]:


## Python 
def is_leap(year):
    # Write your logic here
    if (year%4==0 and year%100!=0) or year%400==0:
        leap=True
    else:
        leap = False
    return leap
   
year = int(raw_input())
print is_leap(year)


# In[ ]:


## Python 3
def is_leap(year):
    # Write your logic here
    if (year%4==0 and year%100!=0) or year%400==0:
        leap=True
    else:
        leap = False
    return leap

year = int(input())
print(is_leap(year))


# # Print Function
# 
# Read an integer N.
# 
# Without using any string methods, try to print the following: 123...N
# 
# 
# Note that "..." represents the values in between.
# 
# Input Format: The first line contains an integer N.
# 
# Output Format: Output the answer as explained in the task.
# 
# Sample Input 0: 3
# 
# Sample Output 0: 123

# In[ ]:


## Python 2
from __future__ import print_function

if __name__ == '__main__':
    n = int(input())

    for i in range(1,n+1):
        print (i,end='')


# In[ ]:


## Python 3
# from __future__ import print_function

if __name__ == '__main__':
    n = int(input())

    for i in range(1,n+1):
        print (i,end='')


# # Find the Runner-Up Score!
# 
# Given the participants' score sheet for your University Sports Day, you are required to find the runner-up score. You are given  scores. Store them in a list and find the score of the runner-up.
# 
# Input Format: The first line contains n. The second line contains an array A[] of n integers each separated by a space.
# 
# Constraints: 2<=n<=10, -100<=A[i]<=100
# 
# Output Format: Print the runner-up score.
# 

# In[ ]:


## Python 2
if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    max_num = max(arr) # to find out max number
    while max(arr) == max_num:
        arr.remove(max(arr))  # remove max number

    print max(arr)


# In[ ]:


## Python 3
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    max_num = max(arr) # to find out max number
    while max(arr) == max_num:
        arr.remove(max(arr)) # remove max number
    print (max(arr))


# # Nested Lists
# 
# 
# Given the names and grades for each student in a Physics class of N students, store them in a nested list and print the name(s) of any student(s) having the second lowest grade.
# 
# Note: If there are multiple students with the same grade, order their names alphabetically and print each name on a new line.
# 
# 
# Input Format
# 
# The first line contains an integer, N, the number of students.
# The 2N subsequent lines describe each student over 2 lines; the first line contains a student's name, and the second line contains their grade.
# 
# Constraints
# 
# 2<=N<=5
# There will always be one or more students having the second lowest grade.
# 
# Output Format
# 
# Print the name(s) of any student(s) having the second lowest grade in Physics; if there are multiple students, order their names alphabetically and print each one on a new line.

# In[ ]:


## Python 2

if __name__ == '__main__':
    name_list=[]
    new_name_list=[]
    score_list=[]
    new_score_list=[]
    second_low_name_list=[]
    
    for _ in range(int(raw_input())):
        name = raw_input()
        score = float(raw_input())
        # List the input
        name_list.append(name)
        score_list.append(score)
    # Sort Upward according to the score
    index=sorted(range(len(name_list)), key=lambda k: score_list[k])
    
    # print new score and name list
    for i in range(len(index)):
        new_name_list.append(name_list[index[i]])
        new_score_list.append(score_list[index[i]])

    # Assign the Second most
    for i in range(len(index)-1):
        if new_score_list[i+1]>new_score_list[i]:
            second_low_score=new_score_list[i+1]
            break
    
    # Find the second low score name
    for i in range(len(index)):
        if new_score_list[i]==second_low_score:
            second_low_name_list.append(new_name_list[i])

    second_low_name_list=sorted(second_low_name_list)

    for i in range(len(second_low_name_list)):
        print(second_low_name_list[i])


# In[ ]:


## Python 3

if __name__ == '__main__':
    name_list=[]
    new_name_list=[]
    score_list=[]
    new_score_list=[]
    second_low_name_list=[]
    
    for _ in range(int(input())):
        name = input()
        score = float(input())
        # List the input
        name_list.append(name)
        score_list.append(score)
    # Sort Upward according to the score
    index=sorted(range(len(name_list)), key=lambda k: score_list[k])
    
    # print new score and name list
    for i in range(len(index)):
        new_name_list.append(name_list[index[i]])
        new_score_list.append(score_list[index[i]])

    # Assign the Second most
    for i in range(len(index)-1):
        if new_score_list[i+1]>new_score_list[i]:
            second_low_score=new_score_list[i+1]
            break
    
    # Find the second low score name
    for i in range(len(index)):
        if new_score_list[i]==second_low_score:
            second_low_name_list.append(new_name_list[i])

    second_low_name_list=sorted(second_low_name_list)

    for i in range(len(second_low_name_list)):
        print(second_low_name_list[i])


# # Finding the percentage
# 
# You have a record of N students. Each record contains the student's name, and their percent marks in Maths, Physics and Chemistry. The marks can be floating values. The user enters some integer N followed by the names and marks for N students. You are required to save the record in a dictionary data type. The user then enters a student's name. Output the average percentage marks obtained by that student, correct to two decimal places.

# In[ ]:


## Python 2

if __name__ == '__main__':
    n = int(raw_input())
    student_marks = {}
    for _ in range(n):
        line = raw_input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)
        student_marks[name] = scores
    query_name = raw_input()


    print("{0:0.2f}".format(sum(student_marks[query_name])/len(student_marks[query_name])))


# In[ ]:


## Python 3

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()

    print("{0:0.2f}".format(sum(student_marks[query_name])/len(student_marks[query_name])))


# # Validating UID
# 
# ABCXYZ company has up to 100 employees.
# The company decides to create a unique identification number (UID) for each of its employees.
# The company has assigned you the task of validating all the randomly generated UIDs.
# 
# A valid UID must follow the rules below:
# 
# - It must contain at least 2 uppercase English alphabet characters.
# - It must contain at least 3 digits (0 - 9).
# - It should only contain alphanumeric characters (a - z, A - Z & 0 - 9).
# - No character should repeat.
# - There must be exactly 10 characters in a valid UID.

# In[ ]:


## Python 2

import re

for _ in range(int(raw_input())):
    u=''.join(sorted(raw_input()))
    try:
        assert re.search(r'[A-Z]{2}',u)
        assert re.search(r'\d\d\d',u)
        assert not re.search(r'[^a-zA-Z0-9]',u)
        assert not re.search(r'(.)\1',u)
        assert len(u)==10
    except:
        print('Invalid')
    else:
        print('Valid')


# In[ ]:


## Python 3

import re

for _ in range(int(input())):
    u=''.join(sorted(input()))
    try:
        assert re.search(r'[A-Z]{2}',u)
        assert re.search(r'\d\d\d',u)
        assert not re.search(r'[^a-zA-Z0-9]',u)
        assert not re.search(r'(.)\1',u)
        assert len(u)==10
    except:
        print('Invalid')
    else:
        print('Valid')

