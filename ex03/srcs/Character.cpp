/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 03:47:32 by suchua            #+#    #+#             */
/*   Updated: 2023/04/10 04:22:51 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character constructor called\n";
	this->name = "(NULL)";
	this->size = 0;
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character(const std::string& name)
{
	std::cout << "Character (STRING) constructor called\n";
	this->name = name;
	this->size = 0;
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (slot[i] != NULL)
			delete slot[i];
	}
	std::cout << "Character destructor called\n";
}

Character::Character(const Character& other)
{
	this->size = other.size;
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (other.slot[i] != NULL)
			this->slot[i] = other.slot[i]->clone();
		else
			this->slot[i] = NULL;
	}
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->size = other.size;
		this->name = other.name;
		for (int i = 0; i < 4; i++)
		{
			if (other.slot[i] != NULL)
				this->slot[i] = other.slot[i]->clone();
			else
				this->slot[i] = NULL;
		}
	}
	return *this;
}

const std::string&	Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{
	if (size == 4)
	{
		std::cout << "Character slot inventory is full, please unequip before equip again !\n";
		return ;
	}
	slot[size] = m;
	++size;
}

bool	Character::valid_idx(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "idx provided is invalid !! Idx should be (0-3)\n";
	else if (size == 0)
		std::cout << "Character slot inventory is empty, please equip before unequip again !\n";
	else if (slot[idx] == NULL)
		std::cout << "slot[idx] is empty !!\n";
	if (idx < 0 || idx > 3 || size == 0 || slot[idx] == NULL)
		return (false);
	return (true);
}

void	Character::unequip(int idx)
{
	if (!valid_idx(idx))
		return ;
	slot[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (!valid_idx(idx))
		return ;
	slot[idx]->use(target);
}
