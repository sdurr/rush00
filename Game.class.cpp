/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:31:05 by msarr             #+#    #+#             */
//   Updated: 2015/06/21 01:34:48 by sdurr            ###   ########.fr       //
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
	int new_x;
	int new_y;
	int i;
	int r;
	Character	horde[100];
	int size;
	int j;

	size = 30;
	getmaxyx(stdscr, new_y, new_x);
	this->_posy = new_y /2;
	curs_set(0);
	this->_posy = _y / 2;
	this->_posx = 2;
	i = 0;
	while ( i <= size - 1)
	{
			r = rand() % size - 2;
			if (r < 1)
				r = 2;
			horde[i].setY(r);
			horde[i].setOldY(horde[i].getY());
		i++;
	}
	while (1)
	{
		i = 0;
		clear();
		while (i  < indexRef && i < 30)
		{
			if ( horde[i].getX() <= 1 || horde[i].getLife() == 0 )
			{
				r = rand() % 28;
				if (r == 0)
					r = 29;
				horde[i].setOldY(horde[i].getY());
				horde[i].setOldX(1);
				horde[i].setY(r);
				horde[i].setX(100);
			}
			else {
				this->_oldPosy = this->_posy;
				this->_oldPosx = this->_posx;
				mvprintw(this->_oldPosy, this->_oldPosx, "   ");
				mvprintw(this->_posy, this->_posx, ">>>");
				horde[i].affChar();
				horde[i].lowX();
			}
			i++;
		}
		j++;
		if (j == 20)
		{
			indexRef++;
			j =0;
		}
			getmaxyx(stdscr, new_y, new_x);
		if ( this->_x != new_x || this->_y != new_y ) {
			border(':', ':', '_', '_', '+', '+', '+', '+');
			this->_x = new_x;
			this->_y = new_y;
			this->_posy = _y / 2;
			this->_posx = 2;
			mvprintw( this->_posy, this->_posx, ">>>" );
		}
		border(':', ':', '_', '_', '+', '+', '+', '+');
		this->display();
		key = getch();
		if ( key == KEY_UP )
		{
			if ( this->_posy > 1 ) {
				this->_oldPosy = this->_posy;
				this->_oldPosx = this->_posx;
				this->_posy = this->_posy - 1;
			}
			mvprintw(this->_oldPosy, this->_oldPosx, "   ");
			mvprintw(this->_posy, this->_posx, ">>>");
		}
		else if ( key == KEY_LEFT )
			;
		else if ( key == KEY_RIGHT )
			;
		else if ( key == KEY_DOWN )
		{
			if ( this->_posy < _y - 2 )
			{
				this->_oldPosy = this->_posy;
				this->_oldPosx = this->_posx;
				this->_posy = this->_posy + 1;
				mvprintw(this->_oldPosy, this->_oldPosx, "   ");
				mvprintw(this->_posy, this->_posx, ">>>");
	 		}
		}
		else if ( key == 27 ) {
			delete this->_w;
			std::exit(0);
		}

	}
}

void	Game::display()
{

}
