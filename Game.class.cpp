/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:31:05 by msarr             #+#    #+#             */
//   Updated: 2015/06/20 23:16:32 by sdurr            ###   ########.fr       //
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
	int new_x;
	int new_y;

	getmaxyx(stdscr, new_y, new_x);
	this->_posy = new_y /2;
	curs_set(0);
	this->_posy = _y / 2;
	this->_posx = 2;

	while (1)
	{

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
			refresh();
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
				refresh();
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

/*void	Game::add_char()
{
	int	y;
	y = 2;
	if (this->_time != std::time(NULL))
	{
		this->_time = std::time(NULL);
		y = y + rand() % (this->_w->getHigh() - 4);
		//this->c = new Character("Test", 1, 5, y, 1, this->_w->getWidh(), this->_w->getHigh());

	}
}
*/
