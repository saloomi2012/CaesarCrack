// Caesar Crack.cpp 
// Suliman Alsaid

#include "stdafx.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <locale>
using std::cin;


int main()
{
	
	std::string cipher;
	char ch;
	std::locale loc;

		std::cout << "Enter your caesar cipher:\n";
		std::getline(std::cin, cipher);
		std::cout << std::endl;

		for (std::string::size_type i = 0; i<cipher.length(); ++i)
			std::tolower(cipher[i], loc);

		for (int i = 1; i < 26; i++)
		{
			std::cout << "Caesar +" << i << ": ";
			for (int j = 0; j < cipher.length(); j++)
			{
				if (((int)cipher[j]) == 32)
				{
					std::cout << " ";
				}
				else if (((int)cipher[j] - i) < 97)
				{
					std::cout << (char)(26 + (int)cipher[j] - i);
				}
				else
				{
					std::cout << (char)((int)cipher[j] - i);
				}
			}
			std::cout << std::endl;
		}

    return 0;
}

