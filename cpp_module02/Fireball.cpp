/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 05:59:15 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:06:14 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp")
{
}

Fireball::Fireball(const Fireball& fireball): ASpell(fireball)
{
}

Fireball& Fireball::operator=(const Fireball& fireball)
{
	if (this == &fireball)
		return (*this);
	this->name = fireball.getName();
	this->effects = fireball.getEffects();
	return (*this);
}

Fireball::~Fireball()
{
}

ASpell*	Fireball::clone(void) const
{
	return (new Fireball(*this));
}
