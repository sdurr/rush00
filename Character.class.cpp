
// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.class.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 17:25:32 by sdurr             #+#    #+#             //
//   Updated: 2015/06/21 01:30:08 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.class.hpp"

Character::Character( std::string name, int hp, int x, int y, int life, int xMax, int yMax ) : _name(name), _hp(hp), _hpMax(hp), _x(x), _y(y), _life(life), _xMax(xMax), _yMax(yMax)  {
	return ;
}

Character::~Character( void ) {
	return ;
}
/*******************************   GET  ****************************************/

int			Character::getHp( void ) const {
	return this->_hp;
}


int			Character::getLife( void ) const {
	return this->_life;
}

int			Character::getX( void ) const {
	return this->_x;
}

int			Character::getY( void ) const {
	return this->_y;
}

std::string	Character::getName( void ) const {
	return this->_name;
}

/*************************************  SET    *************************************/

void		Character::setHp( int hp ) {
	this->_hp = hp;
	if (_hp <= 0) {
		setLife(_life - 1);
	}
}

void		Character::setLife( int life )
{
	_life = life;
	if (_life < 0)
		_life = 0;
}

void	Character::setX( int x ) {
	_x= x;
}

void	Character::setYmax( int y ) {
	_yMax = y;
}


void	Character::setY( int y ) {
	_y = y;
}

void	Character::setOldX( int x ) {
	_oldX = x;
}

void	Character::setOldY( int y ) {
	_oldY = y;
}

/************************************   Fonction  *******************************/

void	Character::move( int x, int y) {
}


void	Character::takeDamage( int Dam ) {
	setHp(_hp - Dam);
}

std::ostream & operator<<(std::ostream & o, Character const & i) {
	o << "afichage: " << i.getName() << " hp: " << i.getHp() << " x " << i.getX() << " y " << i.getY();
	return o;
}

/***/

void		Character::affChar(void) const {

	mvprintw(this->_y, this->_x + 1, " ");
	refresh();
	if (this->_x > 2)
		mvprintw(this->_y, this->_x, "X");
}

Character::Character( void ) : _name("X"), _hp(1), _hpMax(1), _x(100), _y(50), _life(30), _xMax(30), _yMax(30), _oldX(50), _oldY(18) {
	return;
}

void		Character::lowX(void)
{
//	this->_oldX = _x;
		this->_oldX = _x;
		this->_x -= 1;

}

/***/
