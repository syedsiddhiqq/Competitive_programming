# -*- coding: utf-8 -*-
# @Author: SyedAli
# @Date:   2019-01-20 17:50:34
# @Last Modified by:   SyedAli
# @Last Modified time: 2019-01-20 18:33:55

n,k = input().split()
some_string = input()
n = int(n)
k = int(k)
x=k
li=[some_string[y-x:y] for y in range(x, len(some_string)+x,x)]
li = [x for x in li if(len(x)==k)]
li = [i for i in li if(i == len(i)*i[0])]
x = [li.count(x) for x in li]
if(len(x)>0):
	print(max(x))
else:
	print(0)