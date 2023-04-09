/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:52:08 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 23:52:10 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal created\n";
	this->type = "(NULL)";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal type " << this->type << " deleted\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor called\n";
	*this = other;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	this->type = other.type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal type " << this->type << " make a sound\n";
}

std::string	WrongAnimal::getType() const
{
	return "WrongAnimal";
}
