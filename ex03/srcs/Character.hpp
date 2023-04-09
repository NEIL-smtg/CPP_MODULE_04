/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 03:18:47 by suchua            #+#    #+#             */
/*   Updated: 2023/04/10 04:23:05 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : virtual public ICharacter
{
	public:
		//default
		Character();
		Character(const std::string& name);
		~Character();
		Character(const Character& other);
		Character&	operator=(const Character& other);

		//from interface
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		AMateria*	slot[4];
		int			size;
		std::string	name;
		bool		valid_idx(int idx);
};

#endif
