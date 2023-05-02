/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 06:32:09 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:46:07 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
	for (std::vector<ATarget* >::iterator iter = this->target.begin();
		iter != target.end(); iter++)
		delete (*iter);
}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	this->target.push_back(target->clone());
}

void	TargetGenerator::forgetTargetType(std::string const& type)
{
	for (std::vector<ATarget* >::iterator iter = this->target.begin();
		iter != target.end() && *iter != NULL; iter++)
	{
		if (type == (*iter)->getType())
		{
			delete (*iter);
			*iter = NULL;
		}
	}
}

ATarget*	TargetGenerator::createTarget(std::string const& type)
{
	for (std::vector<ATarget* >::iterator iter = this->target.begin();
		iter != target.end() && *iter != NULL; iter++)
	{
		if (type == (*iter)->getType())
		{
			return (*iter);
		}
	}
	return (NULL);
}
