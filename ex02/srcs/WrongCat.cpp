/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:52:59 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 23:54:52 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat created\n";
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deleted\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called\n";
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	this->type = other.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat wooofffff\n";
}

std::string	WrongCat::getType() const
{
	return "WrongCat";
}
