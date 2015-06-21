/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acivita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:10:08 by acivita           #+#    #+#             */
//   Updated: 2015/06/21 15:57:51 by sdurr            ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include "Window.class.hpp"
#include "Character.class.hpp"

int			main(void)
{
	srand(time(NULL));
	time(NULL);
	Game game;
	game.play();
	return (0);
}
