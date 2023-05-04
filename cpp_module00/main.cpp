/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:48:07 by yhwang            #+#    #+#             */
/*   Updated: 2023/05/04 02:09:35 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Warlock.hpp"

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cerr << "Argument error" << std::endl;
		return (1);
	}
	(void)argv;

	{
		Warlock const richard("Richard", "Mistress of Magma");
		richard.introduce();
		std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

		Warlock *jack = new Warlock("Jack", "the Long");
		jack->introduce();
		jack->setTitle("the Mighty");
		jack->introduce();

		delete jack;
	}

	return (0);
}
