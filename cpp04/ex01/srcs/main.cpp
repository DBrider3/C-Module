#include "Dog.hpp"
#include "Cat.hpp"

#define MAX 10

int main(void)
{

	// First part: Leaks Test
	Animal *animals[MAX];

	for (int i = 0; i < MAX; i++)
	{
		if (!(i % 2))
		{
			animals[i] = new Dog();
			animals[i]->makeSound();
		}
		else
		{
			animals[i] = new Cat();
			animals[i]->makeSound();
		}
	}
	 system("leaks a.out");


	// Second part : Deep Copy
	Dog *dog1 = new Dog();
	Cat *cat1 = new Cat();

	Dog *dog2 = new Dog(*dog1);
	 Cat *cat2 = new Cat(*cat1);
	printf("dog1 address: %p\n", dog1->getBrain());
	printf("dog2 address: %p\n", dog2->getBrain());
	delete dog1;
	delete dog2;
	printf("cat1 address: %p\n", cat1->getBrain());
	printf("cat2 address: %p\n", cat2->getBrain());
	delete cat1;
	delete cat2;

	system("leaks a.out");
	return (0);
}
