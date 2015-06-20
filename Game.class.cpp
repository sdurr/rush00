/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:31:05 by msarr             #+#    #+#             */
/*   Updated: 2015/06/20 20:04:02 by acivita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include "Character.class.hpp"

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
	Character	*test = new Character("X", 1, 20, 10, 18, 30, 30);
	while (1)
	{
		curs_set(0);
		clear();
		if (test->getX() >= 1)
			test->affChar();
		refresh();
		test->lowX();
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
