#!/usr/bin/python
# Using python 3.9

import random

# Generate random numbers to sort
def genNumbers(size):
	numbers = [random.randint(0,9) for x in range(size)]
	return numbers

def split(array):
	if len(array) < 2:
		return array
	else:
		splitArray = []
		pivot = array[0]
		for i in array:
			if i > pivot:
				splitArray.append(i)
				print(splitArray)
		return split(splitArray)

def quickSort(numbers):
	numbers = split(numbers)
	#print("sort took " + str(count) + " operations to complete")
	return numbers

unsortedNumbers = genNumbers(20)
print("Unsorted: " + str(unsortedNumbers))
sortedNumbers = quickSort(unsortedNumbers)
print("Sorted: " + str(sortedNumbers))
