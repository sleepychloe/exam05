/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 06:32:00 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/02 06:43:23 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGET_GENERATOR_HPP
# define TARGET_GENERATOR_HPP

#include <iostream>
#include <string>
#include <vector>
#include "./ATarget.hpp"

class	TargetGenerator
{
public:
	TargetGenerator();
	~TargetGenerator();

	void		learnTargetType(ATarget* target);
	void		forgetTargetType(std::string const& type);
	ATarget*	createTarget(std::string const& type);

private:
	TargetGenerator(const TargetGenerator& targetgenerator);
	TargetGenerator& operator=(const TargetGenerator& targetgenerator);
	std::vector<ATarget* >	target;
};

#endif
