/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:08:53 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 23:57:38 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "***************TEST_1*****************" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "Animal : " << j->getType() << " " << std::endl;
	std::cout << "Animal : " << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n\n\n";
	std::cout << "***************TEST_2*****************" << std::endl;
	const WrongAnimal* a = new WrongAnimal();
	const WrongAnimal* b = new WrongCat();
	std::cout << "Animal : " << b->getType() << " " << std::endl;

	b->makeSound(); //will output the cat sound!
	a->makeSound();

	delete a;
	delete b;
	return 0;
}