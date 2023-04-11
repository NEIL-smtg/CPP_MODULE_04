/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 02:07:28 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 23:10:09 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		me->unequip(-1);
		me->unequip(5);
		me->unequip(3);
		
		me->unequip(1);

		delete bob;
		delete me;
		delete src;
		delete tmp;
	}
	{
		IMateriaSource* source = new MateriaSource();
		source->learnMateria(new Ice());
		source->learnMateria(new Cure());
		ICharacter* me2 = new Character("me2");
		AMateria *tmp2, *tmp3;

		tmp3 = source->createMateria("iice");
		if (!tmp3)
			std::cout << "";
		tmp2 = source->createMateria("cure");
		me2->equip(tmp2);
		ICharacter* suck = new Character("suck");
		me2->use(0, *suck);
	
		AMateria*	lst[3];
		for (int i = 0; i < 3; i++)
			lst[i] = new Ice();

		for (int i = 0; i < 3; i++)
			source->learnMateria(lst[i]);
		
		//since there is 2 new materia learned, so there is only 1
		//remaining waited to be freed
		delete lst[2];

		delete source;
		delete me2;
		delete suck;
	}
	return 0;
}
