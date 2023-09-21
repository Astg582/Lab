#include<iostream>
#include<string>

void recStrcpy(char* arr, const char* ptr); //recursiv strcpy
void strcpy(char* arr, const char* ptr);    //iterativ strcpy
const char* subScript(const char* ptr, const char* ptrs); //std subscript
const char* armscript(const char* first, const char* second); //Arm subscript
const char* strStr(const char* ptr, const char* ptr2); //Arm strstr rec
const char* recSubS(const char* ptr, const char* ptrs); //my rec sub str

int main(){

	char arr[6];
	const char* ptr = "hello world, this is a text";
	const char* ptrs = "orld";

	//recStrcpy(arr, ptr); //recursiv strcpy
	//strcpy(arr, ptr);    // iterativ strcpy
	
	std::cout<<strStr(ptr, ptrs)<<std::endl;	

	//std::cout<<arr<<std::endl;
	return 0;
}

//std Arm
const char* armscript(const char* first, const char* second){
	const char* t_first = first;
	const char* t_second = second;
		
			while(*first != '\0' && *second != '\0'){
				if(*first != *second){
					first = ++t_first;
					second = t_second;
					break;
		}else{
		++first;
		++second;
		}
	
		if(*second == '\0'){
			return t_first;
		}
	}
	return nullptr;
}


//std strstr arm rec
const char* strStr(const char* ptr, const char* ptr2){
	static const char* pt2;
	if(*ptr2 == '\0'){
		return nullptr;
	}
	if(*ptr =='\0'){
	return nullptr;
	}
	if(*ptr == *ptr2){
		pt2 = ptr2;
	const char* tmp = strStr(ptr +1, ptr2 +1);
	if(ptr != nullptr && tmp != nullptr){
		return pt2;
	}else{
	return nullptr;
	}
	}
	return strStr(ptr + 1, ptr2);
}

//recursiv std sub script
const char* recSubS(const char* ptr, const char* ptrs){

	if(*ptr == *ptrs){	
	return recSubS(ptr + 1, ptrs + 1);
	}else{
	return recSubS(ptr + 1, ptrs);
	}

	if(*ptrs == '\0'){
        if(recSubS(ptr +1 , ptrs + 1)){
        return ptr;
        }
	}
	if(*ptr =='\0'){
	return nullptr;
	}
}

//iterativ std subscript
const char* subScript(const char* ptr, const char* ptrs){
	const char* tmp = ptr;
	while(*ptr != '\0'){
		if(*ptr == *ptrs){
		tmp = ptr -1;

		while(*ptr == *ptrs){
			++ptr;
			++ptrs;
			if(*ptrs == '\0'){
				return tmp;
			}
		}
		}
	++ptr;
	}
	return nullptr;
}

//recursiv
void recStrcpy(char* arr, const char* ptr){
	if(*ptr == '\0'){
		++arr;
		*arr = '\0';
		return;
	}
	*arr = *ptr;
	recStrcpy(++arr, ++ptr);
}

//iterativ 
void strcpy(char* arr, const char* ptr){
	while(*ptr != '\0'){
		*arr  = *ptr;
		++arr;
		++ptr;
	}
	++arr;
	*arr = '\0';
}
