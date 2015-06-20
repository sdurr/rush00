// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.class.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 17:25:37 by sdurr             #+#    #+#             //
//   Updated: 2015/06/21 00:25:33 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //



#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include "Game.class.hpp"


class Character {
public:
	Character( std::string name , int hp, int x, int y, int life, int xMax, int yMax);
	~Character( void );
	Character( void );

	int getHp( void ) const;
	int getLife( void ) const;
	int getX( void ) const;
	int getY( void ) const;
	std::string getName( void ) const;

	void setHp( int hp );
	void setOldX( int x );
	void setOldY( int y );
	void setXmax( int x );
	void setX( int x );
	void setY( int Y );
	void setYmax( int y );
	void setLife( int life );
	void move( int x, int y);

	void takeDamage( int Dam );
	void affChar(void) const; //ajout antho
	void lowX(void); // ajout antho

private:
	Character( Character const & src );

	std::string _name;
	int _hp;
	int _hpMax;
	int _x;
	int _y;
	int	_life;
	int _xMax;
	int _yMax;
	int _oldX;
	int _oldY;
	Character & operator=(Character const & rhs );
};

std::ostream & operator<<( std::ostream & o, Character const & i);

#endif
