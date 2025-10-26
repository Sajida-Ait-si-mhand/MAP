#include <iostream>
#include <map>

// A small program that store names and phoneNumbers
int main()
{
      std::map <std::string , int > PhoneBook;

      PhoneBook.insert(std::pair<std::string, int> ("Sokou", 0666632));
      PhoneBook.insert(std::pair<std::string, int> ("meri", 000000));
      PhoneBook.insert(std::pair<std::string, int> ("fati", 2222222));

      for (auto pair : PhoneBook)
          std::cout << pair.first << std::endl;

	std::string name ;
	std::getline(std::cin, name);
     auto it = PhoneBook.find(name);
     
   	 if (it != PhoneBook.end())
	{	
    	std::cout << "the number is founded " << it->second << std::endl;
    }
    	else {
        std::cout << "the number is not Fonded " << std::endl;
        }
   
	return 0;
}