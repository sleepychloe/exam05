/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:06:53 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 05:20:31 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects)
{
	this->name = name;
	this->effects = effects;
}

ASpell::ASpell(const ASpell& aspell)
{
	*this = aspell;
}

ASpell& ASpell::operator=(const ASpell& aspell)
{
	if (this == &aspell)
		return (*this);
	this->name = aspell.getName();
	this->effects = aspell.getEffects();
	return (*this);
}

ASpell::~ASpell()
{
}

const std::string	ASpell::getName(void) const
{
	return (this->name);
}

const std::string	ASpell::getEffects(void) const
{
	return (this->effects);
}

void	ASpell::setName(const std::string& name)
{
	this->name = name;
}

void	ASpell::setEffects(const std::string& effects)
{
	this->effects = effects;
}

void	ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}
