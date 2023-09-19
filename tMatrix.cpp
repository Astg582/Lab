#include<iostream>

void mxswap(int arr[][4], int s);  //THE SWAP VERTIKAL AND HORIZONTALLY

void mxprint(int arr[][4], int s); //THE PRINT MATRIX

void mx_180(int arr[][4], int s);  //THE 180 SWAP MATRIX

void prevers(int arr[][4], int s); //THE REVERS PRINT

bool aod(int arr[][4], int s);	   //THE AOXILARI DIAGONAL

void addaod(int arr[][4], int s);  //ADD NOW ARRAY 

int main(){
	int s = 4;
	int arr[4][4];
	int a = 1;

	while(a <= 16){
		for(int i = 0; i < s; ++i){
			for(int j = 0; j < s; ++j){
				arr[i][j] = a;
				++a;
			}
		}
	}
//	mxprint(arr, s);  //THE PRINT MATRIX
//      mxswap(arr,s);    //THE SWAP VERTIKAL AND HORIZONTALLY
	mx_180(arr, s);   //THE 180 SWAP MATRIX
	addaod(arr, s);	  //ADD NOW ARRAY	
	
	mxprint(arr, s);  //THE PRINT MATRIX
	std::cout<<aod( arr, s)<<std::endl;       //THE AOXILARI DIAGONAL

}

	//THE PRINT MATRIX
void mxprint(int arr[][4], int s){
	std::cout<<std::endl;
	for(int i = 0; i < s; ++i){
		for(int j = 0; j < s; ++j){
			std::cout<<arr[i][j]<<" \t ";
		}
		std::cout<<std::endl;
	}
}

	//THE SWAP VERTIKAL AND HORIZONTALLY
void mxswap(int arr[][4], int s){
	for(int i = 0; i < s; ++i){
		for(int j = 1; j < s; ++j){
			std::swap(arr[i][j], arr[j][i]);
		}
		std::cout<<std::endl;
	}
}

	//THE 180 SWAP MATRIX ++i
void mx_180(int arr[][4], int s){

	std::cout<<std::endl;
	
	for(int i = 0; i < s;  ++i){
		for(int j = 0; j < s / 2; ++j){
			std::swap(arr[i][j], arr[s-1 - i][s -1 - j]);
		}
	}
}

	//THE REVERS PRINT
void prevers(int arr[][4], int s){

		std::cout<<std::endl;

		for(int i = s-1; i >= 0; --i){
			for(int j = s - 1; j >= 0; --j){
				std::cout<<arr[i][j]<<" \t ";
			}
			std::cout<<std::endl;
		}
	}
	
	//ADD NOW ARRAY
void addaod(int arr[][4], int s){
       
        for(int i = 0; i < s; ++i){
                for(int j = 0; j < s; ++j){
                        if(j == s-1-i){
                                arr[i][j] = 1;
                        }else if( j > s - 1 -i){
                                arr[i][j] = 4;
                        }else{
                                arr[i][j] = 0;
                        }
                }
        }
}


	//THE AOXILARI DIAGONAL
bool aod(int arr[][4], int s){
	
	for(int i = 0; i < s; ++i){
		for(int j = 0; j < s; ++j){
			if(j == s-1-i){
				if(arr[i][j] != 1){	
					return false;
				}
			}else if( j > s - 1 -i){
				if(arr[i][j] != s){
					return false;
				}
			}else{
				if(arr[i][j] != 0){
					return false;
			
				}
			}	
		}
	}
	return true;
}
