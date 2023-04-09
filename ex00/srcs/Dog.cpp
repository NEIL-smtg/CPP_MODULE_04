/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:07:38 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 18:27:04 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog created\n";
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog deleted\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called\n";
	*this = other;
}

Dog&	Dog::operator=(const Dog& other)
{
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
