/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 06:09:44 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:14:31 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BrickWall.hpp"

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::BrickWall(const BrickWall& brickwall): ATarget(brickwall)
{
	*this = brickwall;
}

BrickWall& BrickWall::operator=(const BrickWall& brickwall)
{
	if (this == &brickwall)
		return (*this);
	brickwall.getType();
	return (*this);
}

BrickWall::~BrickWall()
{
}

ATarget	*	BrickWall::clone(void) const
{
	return (new BrickWall(*this));
}
