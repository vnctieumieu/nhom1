#include <iostream>
using namespace std;
int tong(int a, int b){
	int kq = 0;
	kq = a + b;
	return kq;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> ch;
	switch (phepToan)
	{
	case '+':
		cout << "Tong " << a << " & " << b <<" = " << tong(a,b);
		break;
	case '-':
		cout << a << "-" << b << "= " << hieu(a,b) << endl;
		break;
	case '*':
		cout a << " * " << b << " = " << tich(a,b) << endl;
		break;
	case '/':
		cout<<a<<" / "<<b" = "<< a/b<<endl;
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}

int hieu(int a, int b){
	return a-b;
}

int tich(int a, int b) {
	return a * b;
}