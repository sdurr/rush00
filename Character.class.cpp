// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.class.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 17:25:32 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 17:46:55 by sdurr            ###   ########.fr       //
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

void		Character::setX( int x ) {
	_x = x;
	if (_x > _xMax)
		_x = _xMax;
	if (_x < 0)
		_x = 0;
}

void		Character::setY( int y ) {
	_y = y;
	if (_y > _yMax)
		_y = _yMax;
	if (_y < 0)
		_y = 0;
}

void	Character::setXmax( int x ) {
	_xMax = x;
}

void	Character::setYmax( int y ) {
	_yMax = y;
}

/************************************   Fonction  *******************************/

void	Character::move( int x, int y) {
	setX(x);
	setY(y);
}


void	Character::takeDamage( int Dam ) {
	setHp(_hp - Dam);
}

std::ostream & operator<<(std::ostream & o, Character const & i) {
	o << "afichage: " << i.getName() << " hp: " << i.getHp() << " x " << i.getX() << " y " << i.getY();
	return o;
}
