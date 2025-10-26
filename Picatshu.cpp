#include <iostream>
#include <map>
#include <string>
#include <list>


int main()
{
	std::map<std::string , std::list<std::string>> pokedox;

	std::list<std::string> poky { "attack1", "attack2"};
	std::list<std::string> chikori { "chi1", "chi2"};

	pokedox.insert(std::pair<std::string, std::list <std::string>> ("Picatxu", poky));
	pokedox.insert(std::pair<std::string, std::list <std::string>> ("sjd", chikori));

	for (auto pair : pokedox)
	{
		std::cout << pair.first << "-" ;

		for (auto attack : pair.second)
			std::cout << attack << ",";
		std::cout << std::endl;
	}
	return 0;
}