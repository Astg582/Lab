#include<iostream>

void swap(int num, int num2);

int main(){

	const int size = 4;
	int arr[size] = {0, 1, 2, 3}; 
	int *arrptr = arr;

	int n  = 5;
	int n2 = 9;
	
	swap(n, n2);

	return 0;
}

void swap(int num, int num2){
	int* a = &num;
	int* b = &num2;
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
	std::cout<<"a = "<<*a<< '\n' <<"b = "<<*b<<std::endl;
}

