/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:18:48 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 05:43:18 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ATarget.hpp"

ATarget::ATarget(const std::string& type)
{
	this->type = type;
}

ATarget::ATarget(const ATarget& atarget)
{
	*this = atarget;
}

ATarget& ATarget::operator=(const ATarget& atarget)
{
	if (this == &atarget)
		return (*this);
	this->type = atarget.getType();
	return (*this);
}

ATarget::~ATarget()
{
}

const std::string&	ATarget::getType(void) const
{
	return (this->type);
}

void	ATarget::setType(const std::string& type)
{
	this->type = type;
}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}
