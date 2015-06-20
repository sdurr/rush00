/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:31:05 by msarr             #+#    #+#             */
//   Updated: 2015/06/20 18:42:13 by sdurr            ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"


Game::Game() : _score(0), _x(1)
{
	this->_w = new Window;
	this->setY();
	this->_score = 0;
	this->_x = 0;
}

Game::~Game()
{

}

void	Game::setY()
{
	this->_y = this->_w->getHigh() / 2;
}

void	Game::play()
{
	int	key;
	while (1)
	{
		this->display();
		key = getch();
		if (key == KEY_UP)
			;
		else if (key == KEY_LEFT)
			;
		else if (key == KEY_RIGHT)
			;
		else if (key == KEY_DOWN)
			;
		else if (key == 27)
		{
			delete this->_w;
			std::exit(0);
		}
	}}

void	Game::display()
{

}
