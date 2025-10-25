 #include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, std::string> Dutch;

	Dutch.insert(std::pair<std::string, std::string>("orange", "die Orange ,die apflesnie"));
	Dutch.insert(std::pair<std::string, std::string>("apple", "der apfel"));
	Dutch.insert(std::pair<std::string, std::string>("bannana", "die banane"));
	Dutch.insert(std::pair<std::string, std::string>("strawberry", "der erberee"));

	Dutch["orange"] = "orangina";
	std::cout << Dutch.size() << std::endl;

	for (auto pair : Dutch)
		std::cout << pair.first << "-" << pair.second << std::endl;
	return 0;
}