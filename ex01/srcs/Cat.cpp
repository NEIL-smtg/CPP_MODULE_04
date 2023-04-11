/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:04:09 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 19:08:40 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat created\n";
	this->type = "Cat";
	brain = new Brain();
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat deleted\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called\n";
	brain = new Brain(*other.brain);
	type = other.type;
}

Cat&	Cat::operator=(const Cat& other)
{
	delete brain;
	brain = new Brain(*other.brain);
	type = other.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat meowwwwwwww\n";
}

std::string	Cat::getType() const
{
	return "Cat";
}

void	Cat::setBrainIdeas(int i, const std::string& idea)
{
	brain->setBrainIdeas(i, idea);
}

std::string*	Cat::getBrainIdeas()
{
	return this->brain->getIdeas();
}
