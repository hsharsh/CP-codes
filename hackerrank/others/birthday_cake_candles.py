#!/bin/python3

import sys

n = int(input().strip())
height = [int(height_temp) for height_temp in input().split	()]

print(height.count(max(height)))