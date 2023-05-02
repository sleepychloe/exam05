/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 03:50:10 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:52:26 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "./ASpell.hpp"
#include "./ATarget.hpp"
#include "./SpellBook.hpp"

class	Warlock
{
public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();

	const std::string&	getName(void) const;
	const std::string&	getTitle(void) const;

	void			setTitle(const std::string& title);

	void			introduce(void) const;

	void			learnSpell(ASpell* spell);
	void			forgetSpell(std::string spell);
	void			launchSpell(std::string spell, const ATarget& target);

private:
	Warlock();
	Warlock(const Warlock& warlock);
	Warlock& operator=(const Warlock& warlock);
	std::string		name;
	std::string		title;
	SpellBook		book;

};

#endif
