/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:55:20 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/24 11:55:27 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>
# include <algorithm>

template<typename T>
void	swap(T& x, T& y) {
	std::swap(x, y);
}

template<typename T>
T	max(T const& x, T const& y) {
	return (x > y ? x : y);
}

template<typename T>
T	min(T const& x, T const& y) {
	return (x < y ? x : y);
}

# endif 