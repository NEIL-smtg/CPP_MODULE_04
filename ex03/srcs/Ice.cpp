/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:52:41 by suchua            #+#    #+#             */
/*   Updated: 2023/04/09 03:39:46 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice created\n";
	this->type = "ice";
}

Ice::~Ice()
{
	std::cout << "Ice destructor called\n";
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	*this = other;
}

Ice&	Ice::operator=(const Ice& other)
{
	this->type = other.type;
	return *this;
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << std::endl;
}
