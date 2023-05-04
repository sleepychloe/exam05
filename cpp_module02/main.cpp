/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:54:19 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/04 21:14:06 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Warlock.hpp"
#include "./Fwoosh.hpp"
#include "./Dummy.hpp"
#include "./Fireball.hpp"
#include "./Polymorph.hpp"
#include "./BrickWall.hpp"
#include "./TargetGenerator.hpp"

# define BLACK			"\x1b[0m"
# define CYAN			"\x1b[36m"
# define YELLOW			"\x1b[33m"

int main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cerr << "Argument error" << std::endl;
		return (1);
	}
	(void)argv;

	/*
	expected output:

	Richard: This looks like another boring day.
	Richard: I am Richard, Hello, I'm Richard the Warlock!!
	Inconspicuous Red-brick Wall has been turned into a critter!
	Inconspicuous Red-brick Wall has been burnt to a crisp!
	Richard: My job here is done!
	*/
	std::cout << CYAN << "TEST_01" << BLACK << std::endl;
	{
		Warlock richard("Richard", "foo");
		richard.setTitle("Hello, I'm Richard the Warlock!");
		BrickWall model1;

		Polymorph *polymorph = new Polymorph();
		TargetGenerator tarGen;

		tarGen.learnTargetType(&model1);
		richard.learnSpell(polymorph);

		Fireball *fireball = new Fireball();

		richard.learnSpell(fireball);

		ATarget *wall = tarGen.createTarget("Inconspicuous Red-brick Wall");
		richard.introduce();
		richard.launchSpell("Polymorph", *wall);
		richard.launchSpell("Fireball", *wall);

		delete (polymorph);
		delete (fireball);
	}
	std::cout << std::endl << std::endl;	

	std::cout << CYAN << "TEST_02" << BLACK << std::endl;
	{
		Warlock		chick("Chick", "the cutest");

		/* target */
		Dummy		rabbit;
		Dummy		turtle;
		BrickWall	frog;
		BrickWall	shark;

		/* spell */
		Fwoosh		chickchick;
		Fwoosh		rabbittail;
		Fireball	turtleturtle;
		Fireball	frogfrog;
		Fireball	sharkshark;
		Polymorph	meowmeow;
		Polymorph	mimimimimi;

		/* target generator */
		TargetGenerator	kindergarden_for_chick;

		std::cout << YELLOW << "* introducing myself! *" << BLACK << std::endl;
		chick.introduce();
		std::cout << std::endl;

		std::cout << YELLOW << "* introducing myself after changing title! *" << BLACK << std::endl;
		chick.setTitle("the cutest baby chick");
		chick.introduce();
		std::cout << std::endl;

		std::cout << YELLOW << "* launching spell without learning anything *" << BLACK << std::endl;
		std::cout << "spell name: Fwoosh    , target: rabbit\t| ";
		chick.launchSpell("Fwoosh", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: rabbit\t| ";
		chick.launchSpell("Fireball", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: rabbit\t| ";
		chick.launchSpell("Polymorph", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: turtle\t| ";
		chick.launchSpell("Fwoosh", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: turtle\t| ";
		chick.launchSpell("Fireball", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: turtle\t| ";
		chick.launchSpell("Polymorph", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: frog\t| ";
		chick.launchSpell("Fwoosh", frog);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: frog\t| ";
		chick.launchSpell("Fireball", frog);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: frog\t| ";
		chick.launchSpell("Polymorph", frog);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: shark\t| ";
		chick.launchSpell("Fwoosh", shark);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: shark\t| ";
		chick.launchSpell("Fireball", shark);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: shark\t| ";
		chick.launchSpell("Polymorph", shark);
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* learning spell chickchick(spell name: Fwoosh) *" << BLACK << std::endl;
		chick.learnSpell(&chickchick);
		std::cout << std::endl;
		std::cout << YELLOW << "* learning spell rabbittail(spell name: Fwoosh) *" << BLACK << std::endl;
		chick.learnSpell(&rabbittail);
		std::cout << std::endl;
		std::cout << YELLOW << "* learning spell turtleturtle(spell name: Fireball) *" << BLACK << std::endl;
		chick.learnSpell(&turtleturtle);
		std::cout << std::endl;
		std::cout << YELLOW << "* learning spell frogfrog(spell name: Fireball) *" << BLACK << std::endl;
		chick.learnSpell(&frogfrog);
		std::cout << std::endl;
		std::cout << YELLOW << "* learning spell sharkshark(spell name: Fireball) *" << BLACK << std::endl;
		chick.learnSpell(&sharkshark);
		std::cout << std::endl;
		std::cout << YELLOW << "* learning spell meowmeow(spell name: Polymorph) *" << BLACK << std::endl;
		chick.learnSpell(&meowmeow);
		std::cout << std::endl;
		std::cout << YELLOW << "* learning spell mimimimimi(spell name: Polymorph) *" << BLACK << std::endl;
		chick.learnSpell(&mimimimimi);
		std::cout << std::endl;
		
		std::cout << YELLOW << "* launching spell *" << BLACK << std::endl;
		std::cout << "spell name: Fwoosh    , target: rabbit\t| ";
		chick.launchSpell("Fwoosh", rabbit);
		std::cout << "spell name: Fireball  , target: rabbit\t| ";
		chick.launchSpell("Fireball", rabbit);
		std::cout << "spell name: Polymorph , target: rabbit\t| ";
		chick.launchSpell("Polymorph", rabbit);
		std::cout << "spell name: Fwoosh    , target: turtle\t| ";
		chick.launchSpell("Fwoosh", turtle);
		std::cout << "spell name: Fireball  , target: turtle\t| ";
		chick.launchSpell("Fireball", turtle);
		std::cout << "spell name: Polymorph , target: turtle\t| ";
		chick.launchSpell("Polymorph", turtle);
		std::cout << "spell name: Fwoosh    , target: frog\t| ";
		chick.launchSpell("Fwoosh", frog);
		std::cout << "spell name: Fireball  , target: frog\t| ";
		chick.launchSpell("Fireball", frog);
		std::cout << "spell name: Polymorph , target: frog\t| ";
		chick.launchSpell("Polymorph", frog);
		std::cout << "spell name: Fwoosh    , target: shark\t| ";
		chick.launchSpell("Fwoosh", shark);
		std::cout << "spell name: Fireball  , target: shark\t| ";
		chick.launchSpell("Fireball", shark);
		std::cout << "spell name: Polymorph , target: shark\t| ";
		chick.launchSpell("Polymorph", shark);
		std::cout << std::endl;

		std::cout << YELLOW << "* forgetting spell(spell name: Fwoosh) *" << BLACK << std::endl;
		chick.forgetSpell("Fwoosh");
		std::cout << std::endl;
		std::cout << YELLOW << "* forgetting spell(spell name: Fwoosh) again *" << BLACK << std::endl;
		chick.forgetSpell("Fwoosh");
		std::cout << std::endl;
		std::cout << YELLOW << "* forgetting spell(spell name: Fireball) *" << BLACK << std::endl;
		chick.forgetSpell("Fireball");
		std::cout << std::endl;
		std::cout << YELLOW << "* forgetting spell(spell name: Fireball) again *" << BLACK << std::endl;
		chick.forgetSpell("Fireball");
		std::cout << std::endl;
		std::cout << YELLOW << "* forgetting spell(spell name: Fireball) again *" << BLACK << std::endl;
		chick.forgetSpell("Fireball");
		std::cout << std::endl;
		std::cout << YELLOW << "* forgetting spell(spell name: Polymorph) *" << BLACK << std::endl;
		chick.forgetSpell("Polymorph");
		std::cout << std::endl;

		std::cout << YELLOW << "* launching spell *" << BLACK << std::endl;
		std::cout << "spell name: Fwoosh    , target: rabbit\t| ";
		chick.launchSpell("Fwoosh", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: rabbit\t| ";
		chick.launchSpell("Fireball", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: rabbit\t| ";
		chick.launchSpell("Polymorph", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: turtle\t| ";
		chick.launchSpell("Fwoosh", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: turtle\t| ";
		chick.launchSpell("Fireball", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: turtle\t| ";
		chick.launchSpell("Polymorph", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: frog\t| ";
		chick.launchSpell("Fwoosh", frog);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: frog\t| ";
		chick.launchSpell("Fireball", frog);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: frog\t| ";
		chick.launchSpell("Polymorph", frog);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: shark\t| ";
		chick.launchSpell("Fwoosh", shark);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: shark\t| ";
		chick.launchSpell("Fireball", shark);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: shark\t| ";
		chick.launchSpell("Polymorph", shark);
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* forgetting spell(spell name: Polymorph) again *" << BLACK << std::endl;
		chick.forgetSpell("Polymorph");
		std::cout << std::endl;
		
		std::cout << YELLOW << "* launching spell *" << BLACK << std::endl;
		std::cout << "spell name: Fwoosh    , target: rabbit\t| ";
		chick.launchSpell("Fwoosh", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: rabbit\t| ";
		chick.launchSpell("Fireball", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: rabbit\t| ";
		chick.launchSpell("Polymorph", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: turtle\t| ";
		chick.launchSpell("Fwoosh", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: turtle\t| ";
		chick.launchSpell("Fireball", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: turtle\t| ";
		chick.launchSpell("Polymorph", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: frog\t| ";
		chick.launchSpell("Fwoosh", frog);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: frog\t| ";
		chick.launchSpell("Fireball", frog);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: frog\t| ";
		chick.launchSpell("Polymorph", frog);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: shark\t| ";
		chick.launchSpell("Fwoosh", shark);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: shark\t| ";
		chick.launchSpell("Fireball", shark);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: shark\t| ";
		chick.launchSpell("Polymorph", shark);
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "TEST TARGET GENERATOR" << BLACK << std::endl;
		std::cout << std::endl;
		
		std::cout << CYAN << "* learning spell rabbittail(spell name: Fwoosh) *" << BLACK << std::endl;
		chick.learnSpell(&rabbittail);
		std::cout << std::endl;
		std::cout << CYAN << "* learning spell sharkshark(spell name: Fireball) *" << BLACK << std::endl;
		chick.learnSpell(&sharkshark);
		std::cout << std::endl;
		std::cout << CYAN << "* learning spell mimimimimi(spell name: Polymorph) *" << BLACK << std::endl;
		chick.learnSpell(&mimimimimi);
		std::cout << std::endl;

		ATarget		*meow;
		ATarget		*mimi;
		
		std::cout << CYAN << "* creating target(target name: meow) without learning anything *" << BLACK << std::endl;
		meow = kindergarden_for_chick.createTarget("Target Practice Dummy");
		std::cout << std::endl;
		std::cout << CYAN << "* creating target(target name: mimi) without learning anything *" << BLACK << std::endl;
		mimi = kindergarden_for_chick.createTarget("Inconspicuous Red-brick Wall");
		std::cout << std::endl;

		std::cout << CYAN << "* launching spell without learning any target *" << BLACK << std::endl;
		if (meow != NULL)
		{
			std::cout << "spell name: Fwoosh    , target: meow\t| ";
			chick.launchSpell("Fwoosh", *meow);
			std::cout << "spell name: Fireball  , target: meow\t| ";
			chick.launchSpell("Fireball", *meow);
			std::cout << "spell name: Polymorph , target: meow\t| ";
			chick.launchSpell("Polymorph", *meow);
		}
		else
		{
			std::cout << "spell name: Fwoosh    , target: meow\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Fireball  , target: meow\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Polymorph , target: meow\t| ";
			std::cout << std::endl;
		}
		if (mimi != NULL)
		{
			std::cout << "spell name: Fwoosh    , target: mimi\t| ";
			chick.launchSpell("Fwoosh", *mimi);
			std::cout << "spell name: Fireball  , target: mimi\t| ";
			chick.launchSpell("Fireball", *mimi);
			std::cout << "spell name: Polymorph , target: mimi\t| ";
			chick.launchSpell("Polymorph", *mimi);
			std::cout << std::endl;
		}
		else
		{
			std::cout << "spell name: Fwoosh    , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Fireball  , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Polymorph , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << std::endl;
		}

		std::cout << CYAN << "* learning target rabbit(target type: Target Practice Dummy) *" << BLACK << std::endl;
		kindergarden_for_chick.learnTargetType(&rabbit);
		std::cout << std::endl;
		std::cout << CYAN << "* learning target frog(target type: Inconspicuous Red-brick Wall) *" << BLACK << std::endl;
		kindergarden_for_chick.learnTargetType(&frog);
		std::cout << std::endl;

		std::cout << CYAN << "* creating target(target name: meow, target type: arget Practice Dummy) *" << BLACK << std::endl;
		meow = kindergarden_for_chick.createTarget("Target Practice Dummy");
		std::cout << std::endl;
		std::cout << CYAN << "* creating target(target name: mimi, target type: Inconspicuous Red-brick Wall) *" << BLACK << std::endl;
		mimi = kindergarden_for_chick.createTarget("Inconspicuous Red-brick Wall");
		std::cout << std::endl;

		std::cout << CYAN << "* launching spell *" << BLACK << std::endl;
		if (meow != NULL)
		{
			std::cout << "spell name: Fwoosh    , target: meow\t| ";
			chick.launchSpell("Fwoosh", *meow);
			std::cout << "spell name: Fireball  , target: meow\t| ";
			chick.launchSpell("Fireball", *meow);
			std::cout << "spell name: Polymorph , target: meow\t| ";
			chick.launchSpell("Polymorph", *meow);
		}
		else
		{
			std::cout << "spell name: Fwoosh    , target: meow\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Fireball  , target: meow\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Polymorph , target: meow\t| ";
			std::cout << std::endl;
		}
		if (mimi != NULL)
		{
			std::cout << "spell name: Fwoosh    , target: mimi\t| ";
			chick.launchSpell("Fwoosh", *mimi);
			std::cout << "spell name: Fireball  , target: mimi\t| ";
			chick.launchSpell("Fireball", *mimi);
			std::cout << "spell name: Polymorph , target: mimi\t| ";
			chick.launchSpell("Polymorph", *mimi);
			std::cout << std::endl;
		}
		else
		{
			std::cout << "spell name: Fwoosh    , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Fireball  , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Polymorph , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << std::endl;
		}

		std::cout << CYAN << "* forgetting target(target type: Target Practice Dummy) *" << BLACK << std::endl;
		kindergarden_for_chick.forgetTargetType("Target Practice Dummy");
		std::cout << std::endl;

		std::cout << CYAN << "* creating target(target name: meow, target type: arget Practice Dummy) *" << BLACK << std::endl;
		meow = kindergarden_for_chick.createTarget("Target Practice Dummy");
		std::cout << std::endl;
		std::cout << CYAN << "* creating target(target name: mimi, target type: Inconspicuous Red-brick Wall) *" << BLACK << std::endl;
		mimi = kindergarden_for_chick.createTarget("Inconspicuous Red-brick Wall");
		std::cout << std::endl;

		std::cout << CYAN << "* launching spell *" << BLACK << std::endl;
		if (meow != NULL)
		{
			std::cout << "spell name: Fwoosh    , target: meow\t| ";
			chick.launchSpell("Fwoosh", *meow);
			std::cout << "spell name: Fireball  , target: meow\t| ";
			chick.launchSpell("Fireball", *meow);
			std::cout << "spell name: Polymorph , target: meow\t| ";
			chick.launchSpell("Polymorph", *meow);
		}
		else
		{
			std::cout << "spell name: Fwoosh    , target: meow\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Fireball  , target: meow\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Polymorph , target: meow\t| ";
			std::cout << std::endl;
		}
		if (mimi != NULL)
		{
			std::cout << "spell name: Fwoosh    , target: mimi\t| ";
			chick.launchSpell("Fwoosh", *mimi);
			std::cout << "spell name: Fireball  , target: mimi\t| ";
			chick.launchSpell("Fireball", *mimi);
			std::cout << "spell name: Polymorph , target: mimi\t| ";
			chick.launchSpell("Polymorph", *mimi);
			std::cout << std::endl;
		}
		else
		{
			std::cout << "spell name: Fwoosh    , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Fireball  , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Polymorph , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << std::endl;
		}

		std::cout << CYAN << "* forgetting target(target type: Inconspicuous Red-brick Wall) *" << BLACK << std::endl;
		kindergarden_for_chick.forgetTargetType("Inconspicuous Red-brick Wall");
		std::cout << std::endl;

		std::cout << CYAN << "* creating target(target name: meow, target type: arget Practice Dummy) *" << BLACK << std::endl;
		meow = kindergarden_for_chick.createTarget("Target Practice Dummy");
		std::cout << std::endl;
		std::cout << CYAN << "* creating target(target name: mimi, target type: Inconspicuous Red-brick Wall) *" << BLACK << std::endl;
		mimi = kindergarden_for_chick.createTarget("Inconspicuous Red-brick Wall");
		std::cout << std::endl;

		std::cout << CYAN << "* launching spell *" << BLACK << std::endl;
		if (meow != NULL)
		{
			std::cout << "spell name: Fwoosh    , target: meow\t| ";
			chick.launchSpell("Fwoosh", *meow);
			std::cout << "spell name: Fireball  , target: meow\t| ";
			chick.launchSpell("Fireball", *meow);
			std::cout << "spell name: Polymorph , target: meow\t| ";
			chick.launchSpell("Polymorph", *meow);
		}
		else
		{
			std::cout << "spell name: Fwoosh    , target: meow\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Fireball  , target: meow\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Polymorph , target: meow\t| ";
			std::cout << std::endl;
		}
		if (mimi != NULL)
		{
			std::cout << "spell name: Fwoosh    , target: mimi\t| ";
			chick.launchSpell("Fwoosh", *mimi);
			std::cout << "spell name: Fireball  , target: mimi\t| ";
			chick.launchSpell("Fireball", *mimi);
			std::cout << "spell name: Polymorph , target: mimi\t| ";
			chick.launchSpell("Polymorph", *mimi);
			std::cout << std::endl;
		}
		else
		{
			std::cout << "spell name: Fwoosh    , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Fireball  , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << "spell name: Polymorph , target: mimi\t| ";
			std::cout << std::endl;
			std::cout << std::endl;
		}

		std::cout << YELLOW << "* forgetting spell(spell name: Fwoosh) *" << BLACK << std::endl;
		chick.forgetSpell("Fwoosh");
		std::cout << std::endl;
		std::cout << YELLOW << "* forgetting spell(spell name: Fwoosh) again *" << BLACK << std::endl;
		chick.forgetSpell("Fwoosh");
		std::cout << std::endl;
		std::cout << YELLOW << "* forgetting spell(spell name: Fireball) *" << BLACK << std::endl;
		chick.forgetSpell("Fireball");
		std::cout << std::endl;
		std::cout << YELLOW << "* forgetting spell(spell name: Polymorph) *" << BLACK << std::endl;
		chick.forgetSpell("Polymorph");
		std::cout << std::endl;

		std::cout << YELLOW << "* launching spell *" << BLACK << std::endl;
		std::cout << "spell name: Fwoosh    , target: rabbit\t| ";
		chick.launchSpell("Fwoosh", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: rabbit\t| ";
		chick.launchSpell("Fireball", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: rabbit\t| ";
		chick.launchSpell("Polymorph", rabbit);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: turtle\t| ";
		chick.launchSpell("Fwoosh", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: turtle\t| ";
		chick.launchSpell("Fireball", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: turtle\t| ";
		chick.launchSpell("Polymorph", turtle);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: frog\t| ";
		chick.launchSpell("Fwoosh", frog);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: frog\t| ";
		chick.launchSpell("Fireball", frog);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: frog\t| ";
		chick.launchSpell("Polymorph", frog);
		std::cout << std::endl;
		std::cout << "spell name: Fwoosh    , target: shark\t| ";
		chick.launchSpell("Fwoosh", shark);
		std::cout << std::endl;
		std::cout << "spell name: Fireball  , target: shark\t| ";
		chick.launchSpell("Fireball", shark);
		std::cout << std::endl;
		std::cout << "spell name: Polymorph , target: shark\t| ";
		chick.launchSpell("Polymorph", shark);
		std::cout << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
