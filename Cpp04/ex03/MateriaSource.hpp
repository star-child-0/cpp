/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:28:40 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 19:29:04 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		MateriaSource &operator=(MateriaSource const & src);
		~MateriaSource();
};
