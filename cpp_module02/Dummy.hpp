/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Dummy.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 05:01:45 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 05:29:23 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <iostream>
#include <string>
#include "./ATarget.hpp"

class	Dummy: public ATarget
{
public:
	Dummy();
	Dummy(const Dummy& dummy);
	Dummy& operator=(const Dummy& dummy);
	virtual ~Dummy();

	virtual ATarget*	clone(void) const;

private:

};

#endif
