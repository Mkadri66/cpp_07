/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 09:05:18 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/26 13:48:39 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tpp"
#include <cstdlib>

int	main() {

	try {
		Array<int>	intArray1;
		Array<int>	intArray2(4);
		Array<std::string>	stringArray(3);

		std::cout << "Array 1 size : " << intArray1.size() << std::endl;
		std::cout << "Array 2 size : " << intArray2.size() << std::endl;
		std::cout << "string Array size : " << stringArray.size() << std::endl;

		for (unsigned int i = 0; i < intArray2.size(); i++) {
			intArray2[i] = i;
		}
		stringArray[0] = "hello world";
		stringArray[1] = "We are the champions!";
		stringArray[2] = "42";

		std::cout << std::endl;
		std::cout << "Array 2, index 3 : " << intArray2[3] << std::endl;
		for (unsigned int i = 0; i < stringArray.size(); i++) {
			std::cout << "string Array, index " << i << ": "<< stringArray[i] << std::endl;
		}
		std::cout <<"Array 1, index 3 : " << intArray1[3] << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}