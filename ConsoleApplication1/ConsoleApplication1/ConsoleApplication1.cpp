// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	uint8_t data2[] = { 0x3, 0x2, 0x1, 0x2, 0x2, 0x3, 0x5, 0x2, 0x5, 0x2, 0x2, 0x3, 0x0, 0x0, 0x2, 0x3, 0x5, 0x2, 0xC, 0x2, 0x9, 0x2, 0x3, 0x3, 0xF, 0x2, 0x5, 0x3, 0x2, 0x3, 0x3, 0x2, 0x5, 0x2, 0xE, 0x6, 0x3, 0x2, 0xF, 0x2, 0xD, 0x2 };
	int tc = sizeof(data2) / sizeof(*data2);

	for (int i = 0; i < tc; i += 2)
	{
		uint8_t a = data2[i + 1] << 4;
		uint8_t b = data2[i] | (a ^ 0x40);
		printf("%c", b);
	}
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
