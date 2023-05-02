/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 05:59:08 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:49:31 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include <iostream>
#include <string>
#include "./ASpell.hpp"

class	Fireball: public ASpell
{
public:
	Fireball();
	Fireball(const Fireball& fireball);
	Fireball& operator=(const Fireball& fireball);
	virtual ~Fireball();

	virtual ASpell*		clone(void) const;
	
private:

};

#endif
