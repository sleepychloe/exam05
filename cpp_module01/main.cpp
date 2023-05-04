/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:52:26 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/04 21:10:11 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Warlock.hpp"
#include "./Fwoosh.hpp"
#include "./Dummy.hpp"

# define BLACK			"\x1b[0m"
# define CYAN			"\x1b[36m"
# define YELLOW			"\x1b[33m"

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cerr << "Argument error" << std::endl;
		return (1);
	}
	(void)argv;

	std::cout << CYAN << "TEST_01" << BLACK << std::endl;
	{
		Warlock richard("Richard", "the Titled");

		Dummy bob;
		Fwoosh *fwoosh = new Fwoosh();

		richard.learnSpell(fwoosh);

		richard.introduce();
		richard.launchSpell("Fwoosh", bob);

		richard.forgetSpell("Fwoosh");
		richard.launchSpell("Fwoosh", bob);

		delete (fwoosh);
	}
	std::cout << std::endl << std::endl;

	std::cout << CYAN << "TEST_02" << BLACK << std::endl;
	{
		Warlock	chick("Chick", "the cutest");

		/* target */
		Dummy	rabbit;
		Dummy	turtle;

		/* spell */
		Fwoosh	chickchick;

		std::cout << YELLOW << "* introducing myself! *" << BLACK << std::endl;
		chick.introduce();
		std::cout << std::endl;

		std::cout << YELLOW << "* launching spell without learning anything *" << BLACK << std::endl;
		std::cout << "target: rabbit\t| ";
		std::cout << std::endl;
		chick.launchSpell("Fwoosh", rabbit);
		std::cout << "target: turtle\t| ";
		chick.launchSpell("Fwoosh", turtle);
		std::cout << std::endl;
		std::cout << std::endl;
		
		std::cout << YELLOW << "* forgetting spell(spell name Fwoosh) without learning anything *" << BLACK << std::endl;
		chick.forgetSpell("Fwoosh");
		std::cout << std::endl;

		std::cout << YELLOW << "* learning spell chickchick(spell name: Fwoosh) *" << BLACK << std::endl;
		chick.learnSpell(&chickchick);
		std::cout << std::endl;

		std::cout << YELLOW << "* launching spell *" << BLACK << std::endl;
		std::cout << "target: rabbit\t| ";
		chick.launchSpell("Fwoosh", rabbit);
		std::cout << "target: rabbit\t| ";
		chick.launchSpell("Fwoosh", rabbit);
		std::cout << "target: turtle\t| ";
		chick.launchSpell("Fwoosh", turtle);
		std::cout << "target: turtle\t| ";
		chick.launchSpell("Fwoosh", turtle);
		std::cout << std::endl;

		std::cout << YELLOW << "* launching spell(spell name: rabbit) that chick has not learnt *" << BLACK << std::endl;
		std::cout << "target: rabbit\t| ";
		chick.launchSpell("rabbit", rabbit);
		std::cout << std::endl;
		std::cout << "target: turtle\t| ";
		chick.launchSpell("rabbit", turtle);
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* learning spell chickchick(spell name: Fwoosh) again *" << BLACK << std::endl;
		chick.learnSpell(&chickchick);
		std::cout << std::endl;

		std::cout << YELLOW << "* launching spell *" << BLACK << std::endl;
		std::cout << "target: rabbit\t| ";
		chick.launchSpell("Fwoosh", rabbit);
		std::cout << "target: turtle\t| ";
		chick.launchSpell("Fwoosh", turtle);
		std::cout << std::endl;

		std::cout << YELLOW << "* forgetting spell(spell name: turtle) *" << BLACK << std::endl;
		chick.forgetSpell("turtle");
		std::cout << std::endl;
		std::cout << YELLOW << "* forgetting spell(spell name empty) *" << BLACK << std::endl;
		chick.forgetSpell("");
		std::cout << std::endl;
		std::cout << YELLOW << "* forgetting spell(spell name: Fwoosh)*" << BLACK << std::endl;
		chick.forgetSpell("Fwoosh");
		std::cout << std::endl;

		std::cout << YELLOW << "* launching spell *" << BLACK << std::endl;
		std::cout << "target: rabbit\t| ";
		chick.launchSpell("Fwoosh", rabbit);
		std::cout << std::endl;
		std::cout << "target: turtle\t| ";
		chick.launchSpell("Fwoosh", turtle);
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* forgetting spell(spell name Fwoosh) again: forgot everything *" << BLACK << std::endl;
		chick.forgetSpell("Fwoosh");
		std::cout << std::endl;

		std::cout << YELLOW << "* launching spell *" << BLACK << std::endl;
		std::cout << "target: rabbit\t| ";
		chick.launchSpell("Fwoosh", rabbit);
		std::cout << std::endl;
		std::cout << "target: turtle\t| ";
		chick.launchSpell("Fwoosh", turtle);
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* forgetting spell(spell name: Fwoosh) again *" << BLACK << std::endl;
		chick.forgetSpell("Fwoosh");
		std::cout << std::endl;
	}
	return (0);
}
