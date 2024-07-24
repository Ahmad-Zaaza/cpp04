/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:26 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:06:41 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP

# define Brain_HPP

# include <iostream>

class Brain
{
  protected:
	std::string _ideas[100];

  public:
	Brain(void);
	Brain(std::string idea);
	~Brain();
	Brain(Brain const &);
	Brain &operator=(Brain const &);
};

#endif