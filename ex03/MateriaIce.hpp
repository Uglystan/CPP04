/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaIce.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:21:36 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/01 10:59:29 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIAICE_HPP
#define MATERIAICE_HPP

#include "AMateria.hpp"

class MateriaIce : public AMateria
{
	private:
		
	public:
		MateriaIce(void);
		MateriaIce(MateriaIce const& substitue);
		MateriaIce&	operator=(MateriaIce const& substitue);
		virtual ~MateriaIce(void);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif