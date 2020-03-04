#!/usr/bin/env python
# coding: utf-8

# # collections.Counter()
# 
# Task
# 
# Raghu is a shoe shop owner. His shop has X number of shoes.
# He has a list containing the size of each shoe he has in his shop.
# There are N number of customers who are willing to pay  amount of money only if they get the shoe of their desired size.
# 
# Your task is to compute how much money Raghu earned.

# In[ ]:


## Python 2

from __future__ import print_function
import collections

shoe_num=int(raw_input())
shoe_size_collection=collections.Counter(map(int,raw_input().split()))
cust_num=int(raw_input())

income=0

for i in range(cust_num):
    size, price=map(int,raw_input().split())

    if shoe_size_collection[size]>0:
        shoe_size_collection[size]-=1
        income+=price

print(income)


# In[ ]:


## Python 3

import collections

shoe_num=int(input())
shoe_size_collection=collections.Counter(map(int,input().split()))
cust_num=int(input())

income=0

for i in range(cust_num):
    size, price=map(int,input().split())

    if shoe_size_collection[size]>0:
        shoe_size_collection[size]-=1
        income+=price

print(income)


# In[ ]:




