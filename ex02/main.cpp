/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:38 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:37:55 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"

int	main(void)
{
	int count = 10;
	const Animal *arr[count];

	for (int i = 0; i < count / 2; i++)
		arr[i] = new Dog();
	for (int i = count / 2; i < count; i++)
		arr[i] = new Cat();

	for (int i = 0; i < count; i++)
		arr[i]->makeSound();

	for (int i = 0; i < count; i++)
		delete arr[count - 1 - i];

	return (0);
}