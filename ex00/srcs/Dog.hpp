/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:08:08 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 18:23:52 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : virtual public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		virtual void	makeSound() const;

		//getters
		virtual std::string	getType() const;
};

#endif
