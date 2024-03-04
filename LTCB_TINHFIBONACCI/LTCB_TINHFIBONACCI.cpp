#include <iostream>
using namespace std;
int main()
{
	int a=1, b=1, tong, soluong;
	cout << "Nhap so luong so dau day Fibonacci: ";
	cin >> soluong;
	coutn << "1 1 ";
	// 1 1 2 3 5 8
	for (int i = 1; i <= soluong-2; i++) {
		tong = a + b;
		cout << tong << " "; // 1 1 2
		a = b;
		b = tong;
	}
	return 0;
}
