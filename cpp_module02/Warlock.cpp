/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 03:50:14 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:52:37 by yhwang           ###   ########.fr       */
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
	this->book.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spell)
{
	this->book.forgetSpell(spell);
}

void	Warlock::launchSpell(std::string spell, const ATarget& target)
{
	this->book.createSpell(spell)->launch(target);
}
