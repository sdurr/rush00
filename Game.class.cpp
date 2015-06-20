/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:31:05 by msarr             #+#    #+#             */
/*   Updated: 2015/06/20 23:07:42 by acivita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include "Character.class.hpp"

static int indexRef = 1;

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
	int i;
	int r;
	Character	**horde = new Character*[5];

	i = 0;
	while ( i <= 4)
	{
			r = rand() % 28;
			if (r == 0)
				r = 29;
			horde[i] = new Character;
			horde[i]->setY(r);
		i++;
	} 
	while (1)
	{
	
		i = 0;
		curs_set(0);
		clear();
		border(':', ':', '_', '_', '+', '+', '+', '+');
		while (i  < indexRef && horde[i])
		{
			if (horde[i]->getX() == 1)
			{
				delete horde[i];
				horde[i] = new Character;
				r = rand() % 28;
				if (r == 0)
					r = 29;
				horde[i]->setY(r);
			}
			horde[i]->affChar();
			horde[i]->lowX();
			i++;
		} 
		indexRef++;
		refresh();
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
