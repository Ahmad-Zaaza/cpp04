/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:29:17 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/23 17:35:19 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  private:
	AMateria *materias[4];

  public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &);
	MateriaSource &operator=(MateriaSource const &);

	void learnMateria(AMateria *);
	AMateria *getMateria(std::string const &type);
	AMateria *createMateria(std::string const &type);
};

#endif // MATERIASOURCE_H