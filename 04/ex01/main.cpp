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
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	const WrongAnimal *wrong = new WrongCat();
	wrong->makeSound();
	delete wrong;
	delete i;
	delete j;
	delete meta;

	const Animal* jk = new Dog();
	const Animal* ik = new Cat();
	static_cast<const Dog*>(jk)->getBrain()->setIdea(0, "HELLO WORLD\n");
	delete ik;
	delete jk;//should not create a leak
	return 0;
}
