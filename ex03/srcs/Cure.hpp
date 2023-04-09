/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 03:00:22 by suchua            #+#    #+#             */
/*   Updated: 2023/04/10 02:25:55 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : virtual public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure& other);
		Cure&	operator=(const Cure& other);
		AMateria*			clone() const;
		virtual void		use(ICharacter& target);
};

#endif
