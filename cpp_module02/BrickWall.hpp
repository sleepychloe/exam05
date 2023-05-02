/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 06:09:47 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:12:09 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include <iostream>
#include <string>
#include "./ATarget.hpp"

class	BrickWall: public ATarget
{
public:
	BrickWall();
	BrickWall(const BrickWall& brickWall);
	BrickWall& operator=(const BrickWall& brickwall);
	virtual ~BrickWall();

	virtual ATarget*	clone(void) const;

private:

};

#endif
