#!/usr/bin/env python
# coding: utf-8

# # List Comprehensions
# 
# Let's learn about list comprehensions! You are given three integers X, Y, and Z representing the dimensions of a cuboid along with an integer N. You have to print a list of all possible coordinates given by (i, j, k) on a 3D grid where the sum of i+j+k is not equal to N. Here, 0<=i<=X; 0<=j<=Y; 0<=k<=Z;

# In[4]:


## Python 2

from __future__ import print_function

if __name__ == '__main__':
    x = int(raw_input())
    y = int(raw_input())
    z = int(raw_input())
    n = int(raw_input())

    print ([[a,b,c] for a in range(x+1) for b in range(y+1) for c in range(z+1) if a+b+c != n])


# In[ ]:


## Python 3

if __name__ == '__main__':
# # Approach 1    
#     x = int(input())
#     y = int(input())
#     z = int(input())
#     n = int(input())

#     for a in range(x+1):
#         for b in range(y+1):
#             for c in range(y+1):
#                 if a+b+c!=n:
#                     print([a,b,c], sep=" ", flush=True) ## Problem in representation

# Approach 2
    x,y,z,n = [int(input()) for i in range(4)]
    print ([[a,b,c] for a in range(x+1) for b in range(y+1) for c in range(z+1) if a+b+c != n])


# In[ ]:




