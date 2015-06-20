/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 15:43:36 by msarr             #+#    #+#             */
/*   Updated: 2015/06/20 15:43:38 by msarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Window_CLASS_H
#define Window_CLASS_H

#include <iostream>
# include <stdlib.h>
# include <termios.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/ioctl.h>
# include <signal.h>
# include <fcntl.h>
# include <curses.h>
# include <term.h>
# include <ncurses.h>

class Window
{
    public:
        Window();
        ~Window();

        void        exit();
        WINDOW *    getWin();
        int         getWidh();
        int         getHigh();
        void        reSize();

    private:
        Window(Window &);
        void        setSize();

        int     _w;
        int     _h;
        //int     _s;
        WINDOW *_win;
};

#endif
