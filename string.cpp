#include <iostream>
#include <string>

int main(){


	std::string str;

	std::getline(std::cin, str);
	
	int str_size = str.size();
	for(int i = 0; i < str_size; ++i){
		str[i] |= 32;
		}
	
	std::cout<<str;
}
