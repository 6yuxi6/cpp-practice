#include <iostream>
#include<ctime>

void happybirthday(std::string name,int age);



int main()
{
	std::string name;
std::cout<< "what is your name?" << std::endl;
std::cin >> name;
 
	//std::string name = "yixian";

  int age = 25;
std::cout << "how old are you>" << std::endl;
std::cin >> age;
	

	happybirthday(name,age);

	return 0;

}void happybirthday(std::string name,int age) {
	std::cout << "Happy Birthday to "<<name<<"\n";
	std::cout << "Happy Birthday to " << name << "\n";
	std::cout << "Happy Birthday dear " << name << "\n";
	std::cout << "Happy Birthday to " << name << "\n";
	std::cout << "you are " << age << " years old!\n";
}


