/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:58:44 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 18:17:56 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : virtual public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		virtual void	makeSound() const;

		//getters
		virtual std::string	getType() const;
};

#endif
