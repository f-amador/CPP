/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:36:04 by framador          #+#    #+#             */
/*   Updated: 2025/04/15 15:54:54 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &other);
		Brain &operator=(const Brain &other);
        void                setIdea(int index, const std::string &idea);
        const std::string   &getIdea(int index) const;
        const std::string   &getIdeas() const;
        void                printIdeas() const;
};

#endif