// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Windows.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 15:24:30 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 15:36:25 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Windows.class.hpp"

Windows::Windows( void ) {
	return ;
}

Windows & Windows::operator=(Windows const & rhs) {
	if (this != &rhs){
	}
	return *this;
}

Windows::Windows( Windows const & src ) {
	*this = src;
}

Windows::~Windows( void ) {
	return ;
}
