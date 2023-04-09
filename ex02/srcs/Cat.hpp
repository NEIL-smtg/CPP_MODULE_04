/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:58:44 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 23:30:04 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : virtual public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		virtual void		makeSound() const;
		virtual std::string	getType() const;
		void				setBrainIdeas(int i, const std::string& idea);
		std::string*		getBrainIdeas();
	private:
		Brain	*brain;
};

#endif
