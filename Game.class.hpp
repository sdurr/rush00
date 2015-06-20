/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:31:12 by msarr             #+#    #+#             */
//   Updated: 2015/06/20 22:55:20 by sdurr            ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_CLASS_H
# define GAME_CLASS_H

#include "Window.class.hpp"
#include "Character.class.hpp"

class 	Game
{
	public:
		Game();
		~Game();

		void	play();
		void	setY();


	private:
		int			_score;
		int			_x;
		int			_posy;
		int			_posx;
		int			_oldPosy;
		int			_oldPosx;
		int			_y;
		Window		*_w;
		void		display();
		int			_time;
		void		add_char();

};
#endif
