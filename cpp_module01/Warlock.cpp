/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 03:50:14 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:52:00 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!\n";
}

const std::string&	Warlock::getName(void) const
{
	return (this->name);
}

const std::string&	Warlock::getTitle(void) const
{
	return (this->title);
}

void	Warlock::setTitle(const std::string& title)
{
	this->title = title;
}

void	Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void	Warlock::learnSpell(ASpell* spell)
{
	this->spell.push_back(spell);
}

void	Warlock::forgetSpell(std::string spell)
{
	for (std::vector<ASpell *>::iterator iter = this->spell.begin();
		iter != this->spell.end() && *iter != NULL; iter++)
	{
		if ((*iter)->getName() == spell)
		{
			*iter = NULL;
		}
	}
}

void	Warlock::launchSpell(std::string spell, const ATarget& target)
{
	for (std::vector<ASpell *>::iterator iter = this->spell.begin();
		iter != this->spell.end() && *iter != NULL; iter++)
	{
		if ((*iter)->getName() == spell)
		{
			(*iter)->launch(target);
		}
	}
}
