#include<iostream>

void fill(int arr[][4], const int s);
void print(int (*arr)[4], const int s);
int gdi(int arr[][4], const int s);
int odi(int arr[][4], const int s);

int main(){
const int s = 4;
int arr[s][s];
int arr1[s][s];

fill(arr, s);
print(arr, s);
std::cout << odi(arr, s); 
}

void xa(int arr[][4], int arr2[][4], const int s){
		for(int i = 0; i < s; ++i){
			for(int j = 0; j < s; ++j){
				if((j - 1 > -1) && (i - 1 > -1) && (i + 1 < s) && (j + 1 < s)){
					arr2[i][j] = arr[i-1][j] + arr[i + 1][j] + arr[i][j - 1] + arr[i][j + 1];							   }
				if((j - 1 < 0) && (i - 1 < 0)){
					arr2[i][j] = arr[i + 1][j] + arr[i][j +1];
				} 
				if(i - 1 < 0 && j_)  
		}
}

int odi(int arr[][4], const int s){
	int a = 0;
	for(int i = 0; i < s; ++i){
		for(int j = 0; j < s; ++j){
			if((i + j) == s - 1){
				a += arr[i][j];
			}
		}
	}
	return a;
}

int gdi(int arr[][4], const int s){
	int a = 10;
	for(int i = 0; i < s; ++i){
		for(int j = 0; j < s; ++j){
			if(i == j){
				a += arr[i][j];				
			} 
		} 
	}
return a;
}

void fill(int arr[][4], const int s){
	int a = 10;
	for(int i = 0; i < s; ++i){
		for(int j = 0; j < s; ++j){
			arr[i][j] = ++a;
		} 
	}
}

void print(int (*arr)[4], const int s){
		for(int i = 0; i < s; ++i){
			for(int j = 0; j < s; ++j){
				std::cout << arr[i][j] << ' ';
			} 
			std::cout << std::endl;
		}
}

