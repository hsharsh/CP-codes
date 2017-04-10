#!/bin/python3

import sys

def solve(grades):
    for i in range(n):
        grade_t = grades[i]
        if(grade_t<38):
            pass
        elif(grade_t%10>2 and grade_t%10<5):
            grade_t = grade_t + 5 - grade_t%10
        elif(grade_t%10>7 and grade_t%10<10):
            grade_t = grade_t + 10 - grade_t%10
        grades[i] = grade_t
    return grades

n = int(input().strip())
grades = []
grades_i = 0
for grades_i in range(n):
   grades_t = int(input().strip())
   grades.append(grades_t)
result = solve(grades)
print ("\n".join(map(str, result)))