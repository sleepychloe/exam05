/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 03:50:10 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 04:02:08 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

class	Warlock
{
public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();

	const std::string&	getName(void) const;
	const std::string&	getTitle(void) const;

	void			setTitle(const std::string& title);

	void			introduce(void) const;

private:
	Warlock();
	Warlock(const Warlock& warlock);
	Warlock& operator=(const Warlock& warlock);
	std::string	name;
	std::string	title;

};

#endif
