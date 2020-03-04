#!/usr/bin/env python
# coding: utf-8

# # collections.namedtuple()
# 
# Task
# 
# Dr. John Wesley has a spreadsheet containing a list of student's IDs, marks, class and name.
# 
# Your task is to help Dr. Wesley calculate the average marks of the students.

# In[ ]:


## Python 2

from __future__ import print_function
from collections import namedtuple

Total=0
(no, feature)=int(raw_input()), raw_input().split()
Student=namedtuple('Student',feature)

for _ in range(no):
    Total+=int(Student(*raw_input().split()).MARKS)
print('{:.2f}'.format(Total/no))


# In[ ]:


## Python 3

from collections import namedtuple

Total=0
(no, feature)=int(input()), input().split()
Student=namedtuple('Student',feature)

for _ in range(no):
    Total+=int(Student(*input().split()).MARKS)
print('{:.2f}'.format(Total/no))

