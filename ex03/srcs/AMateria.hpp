/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:36:22 by suchua            #+#    #+#             */
/*   Updated: 2023/04/10 03:14:03 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>
# include <iostream>

class	AMateria
{
	protected:
		std::string	type;
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria& other);
		virtual ~AMateria();
		AMateria();
		AMateria&	operator=(const AMateria& other);

		std::string const & getType() const; //returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
