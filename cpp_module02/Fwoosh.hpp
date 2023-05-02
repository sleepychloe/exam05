/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:49:02 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 05:29:15 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <iostream>
#include <string>
#include "./ASpell.hpp"

class	Fwoosh: public ASpell
{
public:
	Fwoosh();
	Fwoosh(const Fwoosh& fwoosh);
	Fwoosh& operator=(const Fwoosh& fwoosh);
	virtual ~Fwoosh();

	virtual ASpell*		clone(void) const;

private:

};

#endif
