#include<iostream>


template <typename T>
void mySwap(T &h, T &k);

using namespace std;

int main(){
	int x, y;
	string a, b;
	char p, q;
	
	cin >> x >> y >> a >> b >> p >> q;
	
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	cout << "Before swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	mySwap(a,b);
	cout << "After swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	
	cout << "Before swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";
	mySwap(p,q);
	cout << "After swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";

	return 0;
}

template <typename T>
void mySwap(T &h, T &k) {
    T add = h;
	h = k;
    k = add;
}

