/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:58:15 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/18 19:52:28 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplacer.hpp"
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    if (!StringReplacer::replaceInFile(filename, s1, s2)) {
        return 1;
    }

    std::cout << "Replacement complete. Result saved to " << filename + ".replace" << std::endl;
    return 0;
}

// echo "hello world" > test.txt
// ./sed test.txt hello hi
// # test.txt.replace → "hi world"

//./sed test.txt "" hi 

//./sed nofile.txt hi hello