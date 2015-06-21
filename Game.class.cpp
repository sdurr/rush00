/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgrimm <dgrimm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:31:05 by msarr             #+#    #+#             */
/*   Updated: 2015/06/21 09:37:21 by acivita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include "Character.class.hpp"

Game::Game() : _score(0), _x(1), _hp(5) {
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

int		Game::getHP(void) const {
	return this->_hp;
}

void	Game::play()
{
	int	key;
	int new_x;
	int new_y;
	int i;
	int r;
	Character	horde[30];
	int size;
	int j;
	int tmp;

	size = 30;
	getmaxyx(stdscr, new_y, new_x);
	Character	*missile = new Character[new_x - 3];
	this->_posy = new_y /2;
	curs_set(0);
	this->_posy = _y / 2;
	this->_posx = 2;
	i = 0;
	while ( i < new_x - 3)
	{
		missile[i].setX(-1);
		i++;
	}
	i = 0;
	tmp = horde[i].getX();
	while ( i <= size - 1)
	{
		r = rand() % new_y - 2;
		if (r < 1)
			r = 2;
		horde[i].setY(r);
		horde[i].setX(new_x - 10);
		horde[i].setToPrint(0);
		i++;
	}
		horde[0].setToPrint(1);
		j = 0;
	while (1)
	{
		i = 0;
		j++;
		while(i < new_x - 3)
		{
			if (missile[i].getX() != -1)
			{
				if (missile[i].getX() > this->_w->getWidh())
					missile[i].setX(-1);
				else
					missile[i].rightX();
			}
			i++;
		}
		i = 0;
		tmp = 0;
		while (i < 30)
		{
			horde[i].coll(missile);
			if (horde[i].getX() == this->_posx && horde[i].getY() == this->_posy)
			{
				this->_hp--;
				if (this->_hp <= 0)
					return;
			}
			if ( horde[i].getX() <= 1 || horde[i].getHp() == 0 )
			{
				r = rand() % new_y - 2;
				if (r == 0)
					r = new_y - 1;
				horde[i].setY(r);
				horde[i].setX(new_x - 10);
			}
			if (horde[i].getToPrint() == 1)
			{
				horde[i].coll(missile);
				horde[i].affChar();
				horde[i].lowX();
			}
			if (horde[i].getToPrint() == 0 && j == 20)
			{
				horde[i].setToPrint(1);
				j = 0;
			}
			i++;
		}
		getmaxyx(stdscr, new_y, new_x);
		if ( this->_x != new_x || this->_y != new_y ) {
			erase();
			border(':', ':', '_', '_', '+', '+', '+', '+');
			this->_x = new_x;
			this->_y = new_y;
			this->_posy = _y / 2;
			this->_posx = 2;
			mvprintw( this->_posy, this->_posx, ">" );
		}
		border(':', ':', '_', '_', '+', '+', '+', '+');
		key = getch();
		if ( key == KEY_UP )
		{
			if ( this->_posy > 1 ) {
				this->_posy = this->_posy - 1;
			}
				mvprintw(this->_posy + 1, this->_posx, " ");
				mvprintw(this->_posy, this->_posx, ">");
		}
		else if ( key == KEY_LEFT )
			;
		else if ( key == ' ' )
		{
						int jj = 0;
			while (jj < new_x - 3)
			{

				if (missile[jj].getX() == -1)
				{
					missile[jj].setX(this->_posx + 1);
					missile[jj].setY(this->_posy);
					break;
				}
				jj++;
			}
		}
		else if ( key == KEY_DOWN )
		{
			if ( this->_posy < _y - 2 )
			{
				this->_posy = this->_posy + 1;
				mvprintw(this->_posy - 1, this->_posx, " ");
				mvprintw(this->_posy, this->_posx, ">");
	 		}
		}
		else if ( key == 27 ) {
			delete this->_w;
			std::exit(0);
		}

	}
}
