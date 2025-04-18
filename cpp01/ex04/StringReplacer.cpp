/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:58:15 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/18 20:29:37 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplacer.hpp"
#include <fstream>
#include <iostream>

bool StringReplacer::replaceInFile(const std::string& filename,
									const std::string& s1,
									const std::string& s2) {
	// Validate s1
	if (s1.empty()) {
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return false;
	}
 
	// Open input file
	// (replaces C's fopen/fread).
	std::ifstream inFile(filename.c_str());
	if (!inFile.is_open()) {
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return false;
	}

	// Read content
	std::string content;
	std::string line;
	while (std::getline(inFile, line)) {
		content += line;
		// Avoid adding extra newline at EOF
		if (!inFile.eof()) content += "\n"; 
	}
	inFile.close();

	// Replace s1 with s2
	std::string replacedContent = _replaceOccurrences(content, s1, s2);

	// Write to output file
	// (replaces C's fopen/fwrite).
	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile.is_open()) {
		std::cerr << "Error: Could not create file " << filename + ".replace" << std::endl;
		return false;
	}
	outFile << replacedContent;
	outFile.close();

	return true;
	}

	std::string StringReplacer::_replaceOccurrences(std::string content,
												const std::string& s1,
												const std::string& s2) {
	size_t pos = 0;
	// Locates the first occurrence of a substring.
	// Returns `std::string::npos` if not found
	// it is a special constant in C++ that represents "no position" or an invalid position in a string.
	while ((pos = content.find(s1, pos)) != std::string::npos) {
		// Removes characters from a string.
		content.erase(pos, s1.length());
		// Adds characters at a specific position.
		content.insert(pos, s2);
		pos += s2.length();
	}
	return content;
}
