/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:48:55 by suchua            #+#    #+#             */
/*   Updated: 2023/04/10 02:26:02 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : virtual public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice& other);
		Ice&	operator=(const Ice& other);
		AMateria*			clone() const;
		virtual void		use(ICharacter& target);
};

#endif
