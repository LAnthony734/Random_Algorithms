//
// Main.cpp
//
// This file contains functionality for determining the letter name of
// the nth column of a Microsoft Excel spreadsheet.
//
// For reference, column letters adhere to the following convention:
//		A, B, C, ..., Z, AA, AB, AC, ..., AZ, BA, BB, BC, ...
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
#include <string>

std::string ToColumnName(int columnNumber)
{
	std::string columnName = "";
	int         remainder  = 0;
	char        digit      = NULL;

	if (columnNumber > 0) do
	{
		--columnNumber;
		remainder    = columnNumber % 26;
		columnNumber = columnNumber / 26;
		digit        = 'A' + remainder;
		columnName   = digit + columnName;
	}
	while (columnNumber != 0);

	return columnName;
}

int main()
{
	int         columnNumber = 53;
	std::string columnName   = ToColumnName(columnNumber);

	std::cout << columnName << std::endl;
}
