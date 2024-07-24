/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:29:06 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:44:59 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
  public:
	Cure(void);
	Cure(const std::string &type);
	~Cure(void);
	Cure(const Cure &src);
	Cure &operator=(const Cure &rhs);

	Cure *clone(void) const;
	void use(ICharacter &target);
};

#endif // CURE_HPP