/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:46:56 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/11 15:46:56 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

// <iostream>: Provides functionality for input/output streams (std::cin, std::cout, etc.).
// <cctype>: Provides functions for character manipulation (std::toupper, std::islower, etc.).

// In C++, output is handled using streams, specifically the std::cout object
// from the <iostream> header.
// std::cout is used to print text to the standard output (the terminal).

// std::cout is the output stream object.
// The << operator is used to send data to the stream.
// std::endl is used to insert a newline and flush the stream.
// The <cctype> header provides functions for manipulating characters, such as
// converting them to uppercase or lowercase like std::toupper(argv[i][j])

// Type Casting (static_cast)
// Type casting allows you to convert one data type into another explicitly.
// In C++, static_cast is a safe and preferred way to perform type conversions.
// std::toupper() returns an integer value representing an uppercase character
// We use static_cast<char> to explicitly convert this integer back into a char.

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			for (int j = 0; argv[i][j] != '\0'; ++j)
				std::cout << static_cast<char>(std::toupper(argv[i][j]));
		}
		std::cout << std::endl;
	}
	return 0;
}
