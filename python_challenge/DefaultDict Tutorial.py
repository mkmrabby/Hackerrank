#!/usr/bin/env python
# coding: utf-8

# # DefaultDict Tutorial
# 
# Task
# 
# In this challenge, you will be given 2 integers, n and m. There are  words, which might repeat, in word group A. There are m words belonging to word group B. For each  words, check whether the word has appeared in group A or not. Print the indices of each occurrence of m in group A. If it does not appear, print -1.

# In[ ]:


## Python 2

from __future__ import print_function
from collections import defaultdict

d=defaultdict(list)

n,m = map(int,raw_input().split())

# Taking Input
for i in range(n):
    d[raw_input()].append(i+1)

# Type will be informed
input_type=[]

for i in range(m):
    input_type=input_type+[raw_input()]


# Seperate the data

for i in input_type:
    if i in d:
        print(" ".join(map(str,d[i])))
    else:
        print(-1)


# In[ ]:


## Python 3

from __future__ import print_function
from collections import defaultdict

d=defaultdict(list)

n,m = map(int,input().split())

# Taking Input
for i in range(n):
    d[input()].append(i+1)

# Type will be informed
input_type=[]

for i in range(m):
    input_type=input_type+[input()]


# Seperate the data

for i in input_type:
    if i in d:
        print(" ".join(map(str,d[i])))
    else:
        print(-1)

