#!/bin/python3

import sys

n = int(input().strip())
scores = [int(temp) for temp in input().split()]
min_score  = max_score  = scores[0]
count_min = 0
count_max = 0
for i in range(n):
	if(min_score > scores[i]):
		min_score = scores[i]
		count_min+=1
	if(max_score < scores[i]):
		max_score = scores[i]
		count_max+=1
print(" ".join([str(count_max),str(count_min)]))
