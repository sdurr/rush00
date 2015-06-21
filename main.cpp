/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acivita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:10:08 by acivita           #+#    #+#             */
//   Updated: 2015/06/21 12:11:35 by sdurr            ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include "Window.class.hpp"
#include "Character.class.hpp"

int			main(void)
{
	srand(time(NULL));
	Game game;
	game.play();
	return (0);
}
