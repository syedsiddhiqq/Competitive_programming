# -*- coding: utf-8 -*-
# @Author: SyedAli
# @Date:   2019-01-23 21:55:27
# @Last Modified by:   SyedAli
# @Last Modified time: 2019-01-23 22:04:11

n = int(input())
li = []
li  = list(input().split(" "))
li = [int(x) for x in li]
sorted(li)
print(li[n-1])

for i in range(n-1,0,-1):
	for _ in range(1,li[i]+1):
		if(li[i]%_ == 0):
			if( _ not in li):
				break
	print(li[i])
	break