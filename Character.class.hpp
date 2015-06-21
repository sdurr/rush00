// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.class.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 17:25:37 by sdurr             #+#    #+#             //
/*   Updated: 2015/06/21 06:49:33 by acivita          ###   ########.fr       */
//                                                                            //
// ************************************************************************** //



#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include "Game.class.hpp"


class Character {

public:
	Character( std::string name , int hp, int x, int y);
	~Character( void );
	Character( void );

	int getHp( void ) const;
	int getX( void ) const;
	int getY( void ) const;
	std::string getName( void ) const;

	void setX( int x );
	void setY( int Y );

	void affChar(void) const;
	void lowX(void); 
	void rightX(void);
	void coll(Character *missile);

private:
	Character( Character const & src );
	std::string _name;
	int _hp;
	int _x;
	int _y;
	int _special;
	Character & operator=(Character const & rhs );
};

std::ostream & operator<<( std::ostream & o, Character const & i);

#endif
