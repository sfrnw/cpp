/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:58:08 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/18 19:47:17 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGREPLACER_HPP
#define STRINGREPLACER_HPP

#include <string>

class StringReplacer {
	public:
	static bool replaceInFile(const std::string& filename, 
								const std::string& s1, 
								const std::string& s2);
	private:
	static std::string _replaceOccurrences(std::string content, 
											const std::string& s1, 
											const std::string& s2);
};

#endif
