/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:54:09 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 23:54:58 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

class	WrongCat : virtual public WrongAnimal
{
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat&	operator=(const WrongCat& other);
		virtual void	makeSound() const;

		//getters
		virtual std::string	getType() const;
};

#endif
