/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 06:01:47 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:08:54 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::Polymorph(const Polymorph& polymorph): ASpell(polymorph)
{
	*this = polymorph;
}

Polymorph& Polymorph::operator=(const Polymorph& polymorph)
{
	if (this == &polymorph)
		return (*this);
	this->name = polymorph.getName();
	this->effects = polymorph.getEffects();
	return (*this);
}

Polymorph::~Polymorph()
{
}

ASpell*	Polymorph::clone(void) const
{
	return (new Polymorph(*this));
}
