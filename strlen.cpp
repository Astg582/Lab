#include<iostream>
#include<string>
#include<bits/stdc++.h>

int leng(const char* arr); //length
int reclen (const char* arr); //reclen
const char* str_chr(const char* arr, char ch);//str chr
const char* st_chr(const char* arr, char ch); //rec str chr


int main(){
	
	const char* arr = "hello world";
	char a = '0';
	std::cin>>a;
	const void* ptr = (const void*) str_chr(arr, a); 
	std::cout<<ptr<<std::endl;

	//std::cout<<reclen(arr)<<std::endl; //length
}

	//rec str chr
	const char* st_chr(const char* arr, char ch){
		if(*arr == '\0'){
			std::cout<<"yor symbol have not in string"<<std::endl;
		return nullptr;
		}
		if(*arr == ch){
			std::cout<<arr<<' '<<&arr<<std::endl;
		return arr;
		}
		return st_chr(arr+1, ch);
	}

	//str chr
	const char* str_chr(const char* arr, char ch){
		char* ptr = nullptr;
		for(int i = 0; *(arr + i) != '\0'; ++i){
			
			if(*(arr + i) == ch){
				ptr = ((char*) arr + i);
				//printf("%p", ptr);
				//ptr = (const void*) ptr;
				return ptr;
			}
		}
	}

	//reclen
	int reclen (const char* arr){
	if(*arr == '\0'){
	return 0;
	}
	 return  1 + reclen(arr + 1) ;

	}

	//length
	int leng(const char* arr){
		int l = 0;
		while(*arr != '\0'){
		++l;
		arr++;
		}
	return l;
	}
