#!/usr/bin/python
# Using python 3.9

import random

# Generate random numbers to sort
def genNumbers(size):
	numbers = []
	numbers = [random.randint(0,9) for x in range(size)]
	return numbers	

def isSorted(numbers):
	for i in numbers:
		for j in numbers:
			if i > j:
				return false
	return true

def bubbleSort(numbers):
  while isSorted(numbers) == false:
		for j in numbers:
			for k in numbers:
				if j > k:
					i = j
					j = k
					k = i
	return numbers

sortedNumbers = bubbleSort(genNumbers(10))
for sn in sortedNumbers:
	print(sn)
		
