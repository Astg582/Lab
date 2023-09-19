#include<iostream>
#include<string>


int main(){

std::string str;
	std::cin>>str;
	int i = 0;
	while(str[i] != '\n'){
	str[i] |= 32;
	
	++i;	
	
	}
	for(int i = 0; str[i] != '\0'; ++i){
	std::cout<<str[i];
	}
}
