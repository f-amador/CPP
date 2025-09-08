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
Brain::Brain(const Brain &other)
{
    AH:
    for (int i = 0; i < 100; i++)
    {
        _ideas[i] = other._ideas[i];
    }
    std::cout << "Brain copy constructor called\n";
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            _ideas[i] = other._ideas[i];
        }
    }
    std::cout << "Assignment operator called\n";
    return *this;
}
void    Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        _ideas[index] = idea;
}

const std::string &Brain::getIdea(int index) const
{
    static const std::string emptyString = "";
    if (index >= 0 && index < 100 && !_ideas[index].empty())
        return _ideas[index];
    return emptyString;
}

const std::string &Brain::getIdeas() const
{
    return *_ideas;
}

void Brain::printIdeas() const
{
    for (int i = 0; i < 100; i++)
    {
        if (!_ideas[i].empty())
            std::cout << "Idea " << i << ": " << _ideas[i] << std::endl;
    }
}
