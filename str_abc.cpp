#include<iostream>
#include<string>
#include<cstring>

char* abc(char* arr); //str delete not abc
int lengt(char* arr); // str lengh
char* sym(char* arr);  // sym char
int main(){

char arr[90];

	std::cin>>arr;
	//abc(arr);
	
	std::cout<<sym(arr)<<std::endl;
}

// sym char
char* sym(char* arr){

 int j = lengt(arr);
	
	for(int i = 0; arr[i] != '\0'; ++i){
if((arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z') && (arr[j] <= 'a' && arr[i] >= 'z' || arr[i] <= 'A' && arr[i] >= 'Z')){
	std::swap(arr[i], arr[j]); 
	++i;
	--j;
	}
	}		
	return arr;
}


//str lengt
int lengt(char* arr){
	int l = 0;
	while(*arr){
	++arr;
	++l;
	}
	return l;
}


//abc ! delete
char* abc(char* arr){
	int j = 0;
	for(int i = 0; arr[i] != '\0'; ++i){
		if(arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z'){
		arr[j] = arr[i];
		++j;
	}
}
	arr[j] = '\0';
return arr;

}
