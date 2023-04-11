/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:08:08 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 18:24:45 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : virtual public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		virtual void	makeSound() const;
		virtual std::string	getType() const;
		void				setBrainIdeas(int i, const std::string& idea);
		std::string*		getBrainIdeas();
	private:
		Brain	*brain;
};

#endif

