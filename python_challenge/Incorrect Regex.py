#!/usr/bin/env python
# coding: utf-8

# # Incorrect Regex
# 
# You are given a string. Your task is to find out whether S is a valid regex or not.

# In[7]:


## Python 2

from __future__ import print_function
import re

for _ in range(int(raw_input())):
    try:
        re.compile(raw_input())
        print("True")        
    except:
        print("False")


# In[ ]:


## Python 3

import re

for _ in range(int(input())):
    try:
        re.compile(input())
        print("True")
    except:
        print("False")


# In[ ]:




