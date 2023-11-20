#include <iostream>
#include <cmath>

int jef(char arr[]);
void revers(char arr[], int, int);


void foo (char* arr, int size){
   const static int x = size/2;
    if((size - 1) == x){
        return;
    }
    std::swap(*arr, arr[size - 2]);
    foo(arr + 1, size - 1);
}
void Rec(int a){
    if(a == 0){
        std::cout << a << std::endl;
        return;
    }
    std::cout << a << ' ';
    Rec(a - (abs(a) / a));
}
int main(){
    int m = 0;
    std::cin >> m;
    Rec(m);
}

/*int main(){
    const int s = 10;
    char arr[s];
    std::cin >> arr;
    std::cout << " this is a size arr  " << jef(arr) << std::endl;
    //revers(arr, 0, jef(arr) - 1);
    foo(arr, s);
    std::cout << arr << std::endl;
}
*/
void revers(char arr[], int i, int j){
    
    if(i >= j){
        return;
    }

    std::swap(arr[i], arr[j]);
    revers(arr, i + 1, j - 1);
}

int jef(char arr[]){
    int j = 0;
        while(arr[j] != '\0'){
            ++j;
        }
        return j;
}
