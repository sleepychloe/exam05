/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 06:15:15 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/04 21:11:24 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
	for (std::vector<ASpell* >::iterator iter = this->book.begin();
		iter != book.end(); iter++)
		delete (*iter);
}

void	SpellBook::learnSpell(ASpell* spell)
{
	for (std::vector<ASpell* >::iterator iter = this->book.begin();
		iter != book.end(); iter++)
	{
		if (spell->getName() == (*iter)->getName())
			return ;
	}
	this->book.push_back(spell->clone());
}

void	SpellBook::forgetSpell(std::string const& spell)
{
	for (std::vector<ASpell* >::iterator iter = this->book.begin();
		iter != book.end(); iter++)
	{
		if (spell == (*iter)->getName())
		{
			delete (*iter);
			this->book.erase(iter);
			return ;
		}
	}
}

ASpell*	SpellBook::createSpell(std::string const& spell)
{
	for (std::vector<ASpell* >::iterator iter = this->book.begin();
		iter != book.end(); iter++)
	{
		if (spell == (*iter)->getName())
			return (*iter);
	}
	return (NULL);
}
