/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:50:07 by suchua            #+#    #+#             */
/*   Updated: 2023/04/09 02:19:46 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

//not its an abstract class
class	Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		virtual void	makeSound() const =0;
		virtual std::string	getType() const;
	protected:
		std::string	type;
};

#endif
