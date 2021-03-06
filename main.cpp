/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:34:05 by nayache           #+#    #+#             */
/*   Updated: 2022/05/03 16:23:59 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.cpp"
#include "test_stack.cpp"
#include "test_map.cpp"
#include "test.hpp"

int	main(void)
{
	std::ofstream out;
	out.open("log");

	test_stack();
	test_vector(out);
	test_map(out);
	return 0;	
}
