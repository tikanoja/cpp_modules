/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:27 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/18 11:12:32 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe {
	private:
		std::vector<int> vec;
		std::deque<int> deq;
		
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		
	public:
		PmergeMe(void);
		~PmergeMe(void);

		

};

#endif
