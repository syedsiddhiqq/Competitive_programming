# -*- coding: utf-8 -*-
# @Author: SyedAli
# @Date:   2019-01-23 20:23:40
# @Last Modified by:   SyedAli
# @Last Modified time: 2019-01-23 20:40:40

for q in range(int(input())):
	l1,r1,l2,r2 = map(int,input().split())
	a = []
	a.append(l1)
	a.append(r1)
	b = []
	b.append(l2)
	b.append(r2)
	if l1 not in b:
		print(l1)
	elif r1 not in b:
		print(r1)
	if l2 not in a:
		print(l2)
	elif r2 not in a:
		print(r2)