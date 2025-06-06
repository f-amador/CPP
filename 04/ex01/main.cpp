/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:19:46 by framador          #+#    #+#             */
/*   Updated: 2025/04/16 16:13:09 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	const WrongAnimal *wrong = new WrongCat();
	wrong->makeSound();

	Dog basic;
	Dog tmp = basic;
	delete wrong;
	delete i;
	delete j;
	delete meta;

	const Animal* jk = new Dog();
	const Animal* ik = new Cat();
	static_cast<const Dog*>(jk)->getBrain().setIdea(0, "HELLO WORLD\n");
	static_cast<const Dog*>(jk)->getBrain().printIdeas();

	delete ik;
	delete jk;
	const Animal* arr[4];
	for(int i = 0; i < 4; i++)
	{
		if (i % 2)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
	{
		delete arr[i];
	}
	return 0;
}
