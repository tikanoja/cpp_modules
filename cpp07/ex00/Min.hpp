/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:12:32 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/29 15:36:54 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
# define MIN_HPP

template<typename T>
T min(T& arg1, T& arg2) {
	if (arg1 < arg2)
		return (arg1);
	return (arg2);
}

#endif
