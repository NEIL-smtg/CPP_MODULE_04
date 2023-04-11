/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:07:38 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 19:06:50 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog created\n";
	this->type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog deleted\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called\n";
	brain = new Brain(*other.brain);
	this->type = other.type;
}

Dog&	Dog::operator=(const Dog& other)
{
	delete brain;
	brain = new Brain(*other.brain);
	this->type = other.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog barks\n";
}

std::string	Dog::getType() const
{
	return "Dog";
}

void	Dog::setBrainIdeas(int i, const std::string& idea)
{
	brain->setBrainIdeas(i, idea);
}

std::string*	Dog::getBrainIdeas()
{
	return this->brain->getIdeas();
}
