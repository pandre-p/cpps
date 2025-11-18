#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
std::cout << "* !!!Animals construct time!!! *\n" << std::endl;
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << "* !!!WrongAnimals construct time!!! *\n" << std::endl;
const WrongAnimal* wrong = new WrongAnimal();
const WrongAnimal* k = new WrongCat();

std::cout << "* !!!Animals time!!! *\n" << std::endl;
std::cout << meta->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

meta->makeSound(); //will output the generic animal sound!
i->makeSound(); //will output the cat sound!
j->makeSound(); //will output the dog sound!

std::cout << "* !!!WrongAnimals time!!! *\n" << std::endl;

std::cout << wrong->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;

wrong->makeSound(); //will output the generic WrongAnimal sound!
k->makeSound(); //will output the WrongCat sound!

std::cout << "* !!!Destroctors!!! *\n" << std::endl;

delete meta;
delete j;
delete i;
delete wrong;
delete k;

return 0;
}