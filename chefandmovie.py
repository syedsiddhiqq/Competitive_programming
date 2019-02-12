# -*- coding: utf-8 -*-
# @Author: SyedAli
# @Date:   2019-01-28 20:55:13
# @Last Modified by:   SyedAli
# @Last Modified time: 2019-01-29 22:04:00
n = int(input())
for i in range(n):
	temp = int(input())
	j = 0
	while(1):
		if(2**j>temp):
			break
		j+=1
	print(2**(j-1))