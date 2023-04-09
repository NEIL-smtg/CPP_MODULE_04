/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:08:53 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 23:47:35 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal*	animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	
	for (int i = 0; i < 10; i++)
		delete animals[i];


	Cat	cat1;
	Dog	dog1;

	cat1.setBrainIdeas(0, "Cat wishes to rule the dogs.");
	dog1.setBrainIdeas(0, "Dog wishes to rule the cats.");
	
	
	Cat	cat2 = cat1;
	std::cout << "cat1's idea : " << (cat1.getBrainIdeas())[0] << std::endl;
	std::cout << "cat1's idea address : " << &((cat1.getBrainIdeas())[0]) << std::endl;
	std::cout << "cat2's idea : " << (cat2.getBrainIdeas())[0] << std::endl;
	std::cout << "cat2's idea address : " << &((cat1.getBrainIdeas())[0]) << std::endl;
	
	Dog	dog2(dog1);
	std::cout << "dog1's idea : " << (dog1.getBrainIdeas())[0] << std::endl;
	std::cout << "dog1's idea address : " << &((dog1.getBrainIdeas())[0]) << std::endl;
	std::cout << "dog2's idea : " << (dog2.getBrainIdeas())[0] << std::endl;
	std::cout << "dog1's idea address : " << &((dog2.getBrainIdeas())[0]) << std::endl;

	return 0;
}