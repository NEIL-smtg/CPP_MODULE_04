/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 00:39:04 by suchua            #+#    #+#             */
/*   Updated: 2023/04/10 04:23:19 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource&	operator=(const MateriaSource& other);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
	private:
		AMateria*	materia[4];
		int			size;
};

#endif
