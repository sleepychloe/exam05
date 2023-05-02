/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:06:47 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 05:29:07 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_SPELL_HPP
# define A_SPELL_HPP

#include <iostream>
#include <string>
#include "./ATarget.hpp"

class	ATarget;

class	ASpell
{
public:
	ASpell(const std::string& name, const std::string& effects);
	ASpell(const ASpell& aspell);
	ASpell& operator=(const ASpell& aspell);
	virtual ~ASpell();

	const std::string	getName(void) const;
	const std::string	getEffects(void) const;

	void			setName(const std::string& name);
	void			setEffects(const std::string& effects);

	virtual ASpell*		clone(void) const = 0;

	void			launch(const ATarget& target) const;
	
protected:
	std::string	name;
	std::string	effects;

private:
	ASpell();
};

#endif
