/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 17:31:12 by msarr             #+#    #+#             */
/*   Updated: 2015/06/20 20:59:16 by acivita          ###   ########.fr       */
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


	private:
		int			_score;
		int			_x;
		int			_y;
		Window		*_w;
		void		display();
		int			_time;


};
#endif
