//
// Main.cpp
//
// This file contains functionality for computing the nth catalan number.
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

int factoral(int x)
{
	if (x == 1 || x == 0)
	{
		return 1;
	}

	return factoral(x - 1) * x;
}

int findCatalan(int n)
{
	int catalan = 0;

	catalan = factoral(2 * n) / (factoral(n + 1) * factoral(n));

	return catalan;
}

int main()
{
	std::cout << findCatalan(5) << std::endl;
}
