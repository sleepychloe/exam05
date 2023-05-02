/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 06:01:34 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:50:12 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLYMORPH_HPP
# define PLYMORPH_HPP

#include <iostream>
#include <string>
#include "./ASpell.hpp"

class	Polymorph: public ASpell
{
public:
	Polymorph();
	Polymorph(const Polymorph& polymorph);
	Polymorph& operator=(const Polymorph& polymorph);
	virtual ~Polymorph();

	virtual ASpell*		clone(void) const;

private:

};

#endif
