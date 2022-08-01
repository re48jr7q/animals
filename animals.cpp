#include <iostream>
#include <string_view>

enum class Animals
{
	pig,
	chicken,
	goat,
	cat,
	dog,
	duck,
};

constexpr std::string_view getAnimalName(Animals animals)
{
	using enum Animals;

	switch (animals)
	{
	case pig: return "pig"; break;
	case chicken: return "chicken"; break;
	case goat: return "goat"; break;
	case cat: return "cat"; break;
	case dog: return "dog"; break;
	case duck: return "duck"; break;
	default: return "not availably"; break;
	}
}
constexpr std::string_view printNumberOfLegs(Animals legs)
{
	using enum Animals;

	switch (legs)
	{
	case pig: return "4"; break;
	case chicken: return "2"; break;
	case goat: return "4"; break;
	case cat: return "4"; break;
	case dog: return "4"; break;
	case duck: return "2"; break;
	default: return "not availably"; break;
	}
}
auto printAnimalsAndLegs(auto animal, auto legs)
{
	std::cout<< "A " << animal << " has " << legs << " legs.\n";
}
int main()
{
	using enum Animals;

	Animals animal{ Animals::cat };
	Animals legs{ Animals::cat };
	printAnimalsAndLegs(animal, legs);

	Animals animal{ Animals::chicken };
	Animals legs{ Animals::chicken };
	printAnimalsAndLegs(animal, legs);
	
	return 0;
}
