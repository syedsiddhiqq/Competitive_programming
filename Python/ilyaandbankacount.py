# -*- coding: utf-8 -*-
# @Author: SyedAli
# @Date:   2019-01-01 23:54:17
# @Last Modified by:   SyedAli
# @Last Modified time: 2019-01-06 23:46:05

n = int(input())
if n>0:
	print(n)
else:
	n = abs(n)
	a = int (n/10)
	b = int(n/100) 
	b = b*10+n%10
	print(-min(a,b))

# n = int(input())
# print(max(n, int(n/10), int(n/100)*10-(-n)%10))63;