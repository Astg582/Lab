#include<iostream>

const int s = 4;
void fill(int arr[][4], const int s);
void print(int (*arr)[4], const int s);
int gdi(int arr[][4], const int s);
int odi(int arr[][4], const int s);
void priOd(int arr[][s], const int s);
void xa(int arr[][4], int arr2[][4], const int s);

int main(){
int arr[s][s];
int arr1[s][s] = {0};

fill(arr, s);
print(arr, s);
std::cout << std::endl;
xa(arr, arr1, s);
print(arr1, s); 
}

void priOd(int arr[][s], const int s){
for(int i = 0; i < s; ++i){
	std::cout << std::endl;
	for(int j = 0; j < s; ++j){
		if(j < s - i - 1){
		std::cout << "   ";
		}
		if((j + i) >= s-1){
		std::cout << arr[i][j] << ' ';
		}
	}    
	
}
} 



void xa(int arr[][4], int arr2[][4], const int s){
	for(int i = 0; i < s; ++i){
		for(int j = 0; j < s; ++j){
			if(i == 0){
				if(j == 0){
					arr2[i][j] = arr[i + 1][j] + arr[i][j + 1];	
				}else if(j == s - 1){
					arr2[i][j] = arr[i + 1][j] + arr[i][j - 1];
				}else{
					arr2[i][j] = arr[i][j - 1] + arr[i][j + 1] + arr[i + 1][j];
				}	
			}else if((j == s - 1) && (i != s - 1) && (i != 0)){
				arr2[i][j] = arr[i - 1][j] + arr[i + 1][j] + arr[i][j -1];
			}else if((j == 0) && (i != s -1)){
				arr2[i][j] = arr[i + 1][j] + arr[i][j + 1] + arr[i - 1][j];
			}else if(i == s - 1){
				if(j == s - 1){
					arr2[i][j] = arr[i-1][j] + arr[i][j - 1];
				}else if( j - 1 < 0){
					arr2[i][j] = arr[i-1][j] + arr[i][j + 1];
				}else{
					arr2[i][j] = arr[i][j - 1] + arr[i - 1][j] + arr[i][j + 1];
				}
			}else{
				arr2[i][j] = arr[i-1][j] + arr[i+1][j] + arr[i][j -1] + arr[i][j+1]; 
			}
			
		}
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

