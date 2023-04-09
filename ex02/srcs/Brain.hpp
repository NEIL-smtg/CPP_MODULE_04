/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:38:35 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 23:16:27 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain& other);
		Brain&	operator=(const Brain& other);
		std::string *getIdeas();
		void		setBrainIdeas(int i, const std::string& idea);
	private:
		std::string	ideas[100];
};

#endif
