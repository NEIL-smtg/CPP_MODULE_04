/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 03:24:00 by suchua            #+#    #+#             */
/*   Updated: 2023/04/10 02:22:46 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria (NULL) created\n";
	this->type = "(NULL)";
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria " << type << " created\n";
	this->type = type;
}

AMateria::AMateria(const AMateria& other)
{
	std::cout << "AMateria copy constructor called\n";
	*this = other;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	this->type = other.type;
	return *this;	
}

AMateria::~AMateria()
{
	std::cout << "AMateria desturctor called\n";
}

const std::string&	AMateria::getType() const
{
	return this->type;
}

void		AMateria::use(ICharacter& target)
{
	std::cout << "AMateria:" << target.getName() << " has used " << this->type << std::endl;	
}
