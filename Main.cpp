#include <iostream>

class Animal
{
public:
	Animal() {}

	virtual void Voice() 
	{
		std::cout << "ANIMAL";
	}
};

class Dog : public Animal
{
public:
	Dog() {}

	void Voice() override
	{
		std::cout << "Woof!\n";
	}
};

class Cat : public Animal
{
public:
	Cat() {}

	void Voice() override
	{
		std::cout << "Meow!\n";
	}
};

class Duck : public Animal
{
public:
	Duck() {}

	void Voice() override
	{
		std::cout << "Crack!\n";
	}
};

class Tiger : public Animal
{
public:
	Tiger() {}

	void Voice() override
	{
		std::cout << "Rrrr!\n";
	}
};


int main()
{
	const int AnimalsCount = 4;
	
	Animal* animals[AnimalsCount]{
		new Cat(), 
		new Dog(), 
		new Duck(), 
		new Tiger()};

	for (const auto animal : animals) 
	{
		animal->Voice();
		delete animal;
	}
	

	//delete[] animals; - Когда пытаюсь удалить массив (по идее уже пустой к этому моменту), то ловлю ошибку (скрин прикреплю к сообщению).
	*animals = nullptr;
	return 0;
}
