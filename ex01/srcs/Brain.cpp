/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:43:06 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 18:56:49 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

Brain::Brain(const Brain& other)
{
	*this = other;
}

Brain&	Brain::operator=(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}

std::string*	Brain::getIdeas()
{
	return this->ideas;
}

void	Brain::setBrainIdeas(int i, const std::string& idea)
{
	this->ideas[i] = idea;
}
