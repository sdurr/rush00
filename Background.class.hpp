// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Background.class.hpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/21 13:40:05 by sdurr             #+#    #+#             //
//   Updated: 2015/06/21 13:40:06 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BACKGROUND_CLASS_HPP
# define BACKGROUND_CLASS_HPP
#include <iostream>
#include <curses.h>

class Background
{
public:
    Background(int    x_max, int y_max);
    ~Background();
    void    move();
    void    ini();
private:
    unsigned int    pos_x;
    int                *tabx;
    int                *taby;
    int                xmax;


    
};
#endif
