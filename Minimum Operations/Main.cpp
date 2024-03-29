//
// Main.cpp
//
// This file contains functionality for determing the minimum operations needed to compute
// a given number from 0 where the only two operations that can be performed are 
// "multiply by 2" and "add by 1".
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

int minimumOperations(int x)
{
	int operations = 0;

	int y = 0;

	while (y != x)
	{
		if (y == 0 || (y * 2) > x)
		{
			++y;
		}
		else
		{
			y *= 2;
		}

		++operations;
	}

	return operations;
}

int main()
{
	std::cout << minimumOperations(8) << std::endl;
}
