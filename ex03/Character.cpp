/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:04:20 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/01 11:49:24 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const& substitue)
{
	_name = substitue._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = substitue._inventory[i]->clone();
	std::cout << "Character ccopie constructor called" << std::endl;
}

Character&	Character::operator=(Character const& substitue)
{
	std::cout << "Character assignement operator called" << std::endl;
	if (this != &substitue)
	{
		_name = substitue._name;
		for (int i = 0; i < 4; i++)
			delete _inventory[i];
		for (int i = 0; i < 4; i++)
			_inventory[i] = substitue._inventory[i]->clone();
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	std::cout << "Character destructor called" << std::endl;
}

std::string const& Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	int i = 0;
	if (m == NULL)
	{
		std::cout << "Materia invalid" << std::endl;
		return ;
	}
	while (i < 4 && _inventory[i] != NULL)
		i++;
	if (i == 4)
		std::cout << "Inventory is full !" << std::endl;
	else
		_inventory[i] = m;
}

void Character::use(int index, ICharacter& target)
{
	if (index < 4 && index >= 0 && _inventory[index] != NULL)
		_inventory[index]->use(target);
	else
		std::cout << "No Materia at this index" << std::endl;
}

void Character::unequip(int index)
{
	if (index < 4 && index >= 0)
		_inventory[index] = NULL;
	else
		std ::cout << "Index invalid !" << std::endl;
}