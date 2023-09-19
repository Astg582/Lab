#include<iostream>

bool equel(int arr1[], int s){
	int arr[s][s] = arr1[s][s];
	int sum = 0;
	for(int i = 0; i < s; ++i){
		sum += arr[0][i];
	}
	for(int i = 0; i < s; ++i){
	int rowSum = 0;
	int colSum = 0;
	for(int j = 0; j < s; ++j){
		rowSum += arr[i][j];
		colSum += arr[j][i];	
	}
	if(rowSum != sum || colSum != sum){
		retirn false;	
	}
	
	}
	int di1 = 0;
	int di2 = 0;
	for(int i = 0; i< s; ++i){
	di1 += arr[i][i];
	di2 += arr[i][s -1 -i];
	}
	if(di1 != di2 ){
		return false;
	}
	return true;
	
}


int main(){
 const int s = 4;
 int arr[s][s];

 for(int i = 0; i < s; ++i){
	 for(int j = 0; j < s; ++j){
		arr[i][j] = rand() % 5 + 1;
		std::cout<<arr[i][j]<< " " ;
	 }
	 std::cout<< '\n';
 }

/*	std::cout<< '\n';
	for(int i = 0; i < s; ++i){
		for(int j = i + 1; i < s ; ++i){
			std::swap(arr[i][j], arr[j][i]);
		
		}
	
	}

for(int i = 0; i < s; ++i){
         for(int j = 0; j < s; ++j){
              
                std::cout<<arr[i][j]<< " " ;
         }
         std::cout<< '\n';
 }
*/
	// bool equel
//	equel(arr, s);
	 bool eqiel
/*	


	// matrix 000111
	

	 for(int i = 0; i < s; ++i){
          for(int j = 0; j < s; ++j){		 
                arr[i][j] = 0;
		}
       	}

	for(int i = 0; i < s; ++i){
		for(int j = 0; j <= s -1 ; ++i){
			if(j >= s-1 -i){
			arr[i][j] = 1;
			}
		}
	}
//print
	for(int i = 0; i < s; ++i){
         for(int j = 0; j < s; ++j){

                std::cout<<arr[i][j]<< " " ;
         }
         std::cout<< '\n';
 }
*/


}
