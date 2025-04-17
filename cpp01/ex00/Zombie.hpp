/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:05:09 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/16 17:41:29 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// guards
// Used to prevent a header file from being included multiple times, which can cause errors.

#ifndef ZOMBIE_HPP //
#define ZOMBIE_HPP

// For input/output streams (std::cout)
#include <iostream>
// For using std::string
#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name); //constructor
    ~Zombie(); //destructor

    void announce() const;
};

#endif
