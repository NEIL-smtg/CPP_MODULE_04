/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:04:09 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 18:26:45 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat created\n";
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat deleted\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called\n";
	*this = other;
}

Cat&	Cat::operator=(const Cat& other)
{
	this->type = other.type;
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
