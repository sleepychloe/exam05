/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 05:01:43 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 05:29:27 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy")
{
}

Dummy::Dummy(const Dummy& dummy): ATarget(dummy)
{
	*this = dummy;
}

Dummy& Dummy::operator=(const Dummy& dummy)
{
	if (this == &dummy)
		return (*this);
	dummy.getType();
	return (*this);
}

Dummy::~Dummy()
{
}

ATarget*	Dummy::clone(void) const
{
	return (new Dummy(*this));
}
