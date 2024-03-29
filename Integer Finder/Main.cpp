//
// Main.cpp
//
// This file contains functionality for locating the first and last appearance of
// a given integer in a given array.
//
// The MIT License (MIT)
// 
// Copyright (c) 2022-2024 Luke Andrews.  All Rights Reserved.
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy of this
// software and associated documentation files (the "Software"), to deal in the Software
// without restriction, including without limitation the rights to use, copy, modify, merge,
// publish, distribute, sub-license, and/or sell copies of the Software, and to permit persons
// to whom the Software is furnished to do so, subject to the following conditions:
// 
// * The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
// INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
// PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
// FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR 
// OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//
#include <iostream>

int* findIntegerPositions(int array[], int size, int integer)
{
	static int positions[] = {-1, -1};

	int i = 0;
	int j = 0;

	for (i = 0; i < size; ++i)
	{
		if (array[i] == integer)
		{
			positions[0] = i;
			break;
		}
	}
	
	for (j = size - 1; j >= i; --j)
	{
		if (array[j] == integer)
		{
			positions[1] = j;
			break;
		}
	}

	return positions;
}

int main()
{
	int array[] = {1, 0, 0, 0, 1};
	int size    = sizeof(array)/sizeof(array[0]);
	int integer = 1;

	int* positions = findIntegerPositions(array, size, integer);

	printf("First: %d\nLast: %d\n", *positions, *(positions + 1));
}
