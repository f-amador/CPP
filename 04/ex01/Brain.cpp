/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:23:17 by framador          #+#    #+#             */
/*   Updated: 2025/04/15 15:56:06 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor has been called\n";
}

Brain::~Brain()
{
    std::cout << "Brain Destructor has been called\n";
}

void    Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        _ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (!_ideas[index].empty())
        return (_ideas[index]);
}

const std::string *Brain::getIdeas() const
{
    return _ideas;
}

void Brain::printIdeas() const
{
    for (int i = 0; i < 100; i++)
    {
        if (!_ideas[i].empty())
            std::cout << "Idea " << i << ": " << _ideas[i] << std::endl;
    }
}
