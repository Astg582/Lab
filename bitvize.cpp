#include<iostream>

void foo(int* ptr, char c, char d, char sh); //int <-- char short
//void(*boor)(int* ptr, char c, char d, short sh) = foo; //func*
bool zoo (int n); //zuig;
void count(bool (*zo1)(int), int arr[5]); // zuig  type
void pr(int a);
void prot(void(*pr)(int), int arr[5]);

int main(){
	
	int arr[5]  = {1, 2, 3, 4, 5};
/*	
	int a  = 10;
	int* ptr = &a;

	char d = 'E';
	char c = 'V';
	short sh = 111;

	char* ptc = (char*) ptr;
	short* s = (short*) ptr + 1;

	zoo (a);
*/	//foo(ptr, c, d, sh); //int <-- char short
//	count(zoo, arr);
	prot(pr, arr);
//	std::cout<<zoo(a)<<std::endl;
}

//void(*boor)(int* ptr, char c, char d, short sh) = foo;
void count(bool (*zo1)(int), int arr[5]){
        for(int i = 0; i < 5; ++i){
                if(zo1(arr[i])){
                        std::cout<<arr[i]<<std::endl;
        }
        }
}

//arr voud
void prot(void (*pr)(int), int arr[5]){
	for(int i = 0; i < 5; ++i){
		pr(arr[i]);
}
}

//tpel
void pr(int a){
	std::cout<<' '<<a<< ' ';
}


// bool zuig
bool zoo (int n){
 return !(n % 2);
}

//int <-- char short
void foo(int* ptr, char c, char d, short sh){
	char* ptc = (char*) ptr;
	*ptc = c;
	*(ptc + 1) = d;
	short* s =(short*) ptc  + 1;
	*s = sh; 
}
