/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:48:58 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 05:43:37 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed")
{	
}

Fwoosh::Fwoosh(const Fwoosh& fwoosh): ASpell(fwoosh)
{
	*this = fwoosh;
}

Fwoosh& Fwoosh::operator=(const Fwoosh& fwoosh)
{
	if (this == &fwoosh)
		return (*this);
	this->name = fwoosh.getName();
	this->effects = fwoosh.getEffects();
	return (*this);
}

Fwoosh::~Fwoosh()
{
}

ASpell*	Fwoosh::clone(void) const
{
	return (new Fwoosh(*this));
}