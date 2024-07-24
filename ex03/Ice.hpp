/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:29:04 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:46:08 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
  public:
	Ice(void);
	Ice(const std::string &type);
	~Ice(void);
	Ice(const Ice &src);
	Ice &operator=(const Ice &rhs);

	Ice *clone(void) const;
	void use(ICharacter &target);
};

#endif // ICE_HPP