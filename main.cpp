/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acivita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:10:08 by acivita           #+#    #+#             */
/*   Updated: 2015/06/20 20:28:22 by acivita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include "Windows.class.hpp"
#include "Character.class.hpp"

int			main(void)
{
	srand(time(NULL));
	Game game;
	game.play();
	return (0);
}
