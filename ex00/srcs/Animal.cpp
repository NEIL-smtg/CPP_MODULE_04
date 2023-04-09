/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:53:20 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 18:35:18 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created\n";
	this->type = "(NULL)";
}

Animal::~Animal()
{
	std::cout << "Animal type " << this->type << " deleted\n";
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor called\n";
	*this = other;
}

Animal&	Animal::operator=(const Animal& other)
{
	this->type = other.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal type " << this->type << " make a sound\n";
}

std::string	Animal::getType() const
{
	return "Animal";
}
