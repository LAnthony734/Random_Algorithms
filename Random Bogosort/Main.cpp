//
// Main.cpp
//
// This file contains functionality of a random bogosort.
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
#include <vector>

int compares = 0;
int swaps    = 0;

int factorial(int x)
{
	int factorial = 1;

	for (int i = 1; i <= x; ++i)
	{
		factorial *= i;
	}

	return factorial;
}

void printNumbers(std::vector<int> numbers)
{
	for (int a : numbers)
	{
		printf("%d ", a);
	}
	printf("\n");
}

void shuffle(std::vector<int>& numbers)
{
	int size = numbers.size();

	for (int i = 0; i < size; ++i)
	{
		int j = rand() % size;
		int temp = 0;
		temp = numbers[i];
		numbers[i] = numbers[j];
		numbers[j] = temp;
		++swaps;
	}
}

void sortBogo(std::vector<int>& numbers)
{
	int size = numbers.size();
	int i    = 1;

	do
	{
		for (i = 1; i < size; ++i)
		{
			++compares;
			if (numbers[i] < numbers[i-1])
			{
				shuffle(numbers);
				break;
			}
		}
	}
	while (i != size);
}

int main()
{
	std::vector<int> numbers = {2, 5, 4, 7, 6, 1, 9, 0, 3, 8};

	std::cout << "Unsorted: ";
	printNumbers(numbers);

	sortBogo(numbers);

	std::cout << "  Sorted: ";
	printNumbers(numbers);

	int size = numbers.size();

	printf("\n");
	printf("Compares: %d\n", compares);
	printf("   Swaps: %d\n", swaps);
}