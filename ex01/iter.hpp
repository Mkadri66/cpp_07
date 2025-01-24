/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:47:48 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/24 12:47:59 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T, typename F>
void	iter(T* array, int length, F function) {
	for (int i = 0 ; i < length; i++) {
		function(array[i]);
	}
}

template<typename T>
void	printSomething(T& thing) {
	std::cout << thing << "   ";
}

#endif