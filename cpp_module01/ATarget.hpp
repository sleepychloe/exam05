/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:18:41 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 05:29:01 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TARGET_HPP
# define A_TARGET_HPP

#include <iostream>
#include <string>
#include "./ASpell.hpp"

class	ASpell;

class	ATarget
{
public:
	ATarget(const std::string& type);
	ATarget(const ATarget& atarget);
	ATarget& operator=(const ATarget& atarget);
	virtual ~ATarget();
	
	const std::string&	getType(void) const;

	void			setType(const std::string& type);
	
	virtual ATarget*	clone(void) const = 0;

	void			getHitBySpell(const ASpell& spell) const;

protected:
	std::string	type;

private:
	ATarget();

};

#endif
