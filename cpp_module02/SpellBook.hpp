/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 06:14:55 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:52:59 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "./ASpell.hpp"

class	SpellBook
{
public:
	SpellBook();
	~SpellBook();

	void		learnSpell(ASpell* spell);
	void		forgetSpell(std::string const& spell);
	ASpell*		createSpell(std::string const& spell);
	
private:
	SpellBook(const SpellBook& spellbook);
	SpellBook& operator=(const SpellBook& spellbook);
	std::vector<ASpell* >	book;

};

#endif
