/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:58:15 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/18 20:39:18 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
    typedef void (Harl::*ComplaintFunction)(void);
    struct ComplaintLevel {
        std::string name;
        ComplaintFunction function;
    };
    
    static ComplaintLevel levels[4];

public:
    void complain(std::string level);
};

#endif
