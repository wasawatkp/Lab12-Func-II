#include<iostream>
using namespace std;

int fibonacci(unsigned int x);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(15);
    return 0; 
}

int fibonacci(unsigned int x){
    if (x == 0) return 0;
    else if (x == 1) return  1;
    else  return  fibonacci(x-1) + fibonacci(x-2);
}
