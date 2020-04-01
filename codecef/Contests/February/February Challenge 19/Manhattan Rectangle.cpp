# your code goes here
import math
import sys
import re
import os
import random


m=1000000000
def f(d):
	x,y=0,d
	print("Q",str(x),str(y))
	d=int(input())
	x=d
	print("Q",str(x),str(0))
	d=int(input())
	y=d
	xl=x
	yl=y
	print("Q",str(m),str(yl))
	d=int(input())
	xl=m-d
	print("Q",str(xl),str(m))
	d=int(input())
	yl=m-d
	print("A",str(x),str(y),str(xl),str(yl))
	d=int(input())
	return d
def s():
	print("Q",str(0),str(0))
	n1=int(input())
	print("Q",str(0),str(m))
	n2=int(input())
	d=(m+n1-n2)//2
	return f(d)

for _ in range(int(input())):
	if s()<0:
		break;

