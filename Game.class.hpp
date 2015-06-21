/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:31:12 by msarr             #+#    #+#             */
//   Updated: 2015/06/21 12:13:37 by sdurr            ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_CLASS_H
# define GAME_CLASS_H

#include "Window.class.hpp"
#include "Character.class.hpp"
#include <ctime>

class 	Game
{
	public:
		Game();
		~Game();

		void	play();
		void	setY();

		int		getHP(void) const;
		int		getScore(void) const;
		int		pause( void ) const;

	private:
		int			_score;
		int			_x;
		int			_hp;
		int			_posy;
		int			_posx;
		int			_y;
		Window		*_w;
		int			_time;
};
#endif
