/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 03:02:21 by suchua            #+#    #+#             */
/*   Updated: 2023/04/10 02:20:11 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure created\n";
	this->type = "cure";
}

Cure::~Cure()
{
	std::cout << "Cure destructor called\n";
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	*this = other;
}

Cure&	Cure::operator=(const Cure& other)
{
	*this = other;
	return *this;
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "Cure: \"* heals " << target.getName() << "'s wounds \"\n";
}
