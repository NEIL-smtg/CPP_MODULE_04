/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 00:41:17 by suchua            #+#    #+#             */
/*   Updated: 2023/04/10 04:23:31 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called\n";
	size = 0;
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (materia[i] != NULL)
			delete materia[i];
	std::cout << "MateriaSource destructor called\n";
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	this->size = other.size;
	for (int i = 0; i <= this->size; i++)
		this->materia[i] = other.materia[i]->clone();
	for (int i = this->size; i < 4; i++)
		this->materia[i] = NULL;	
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	this->size = other.size;
	for (int i = 0; i <= this->size; i++)
		this->materia[i] = other.materia[i]->clone();
	for (int i = this->size; i < 4; i++)
		this->materia[i] = NULL;
	return *this;
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (size == 4)
	{
		std::cout << "MateriaSource has reaches its limit to learn new Materia !!\n";
		return ;
	}
	this->materia[size] = materia;
	++size;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < size; i++)
	{
		if (type == this->materia[i]->getType() && type == "ice")
			return (new Ice());
		else if (type == this->materia[i]->getType() && type == "cure")
			return (new Cure());
	}
	std::cout << "Unable to create Materia since \"" << type << "\" has never been learned before\n";
	return (NULL);
}
