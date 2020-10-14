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
float chuvihcn(int dai, int rong);
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
		cout << a << " * " << b << " = " << tich(a,b) << endl;
		break;
	case '/':
		cout<<a<<" / "<<b<<" = "<< thuong(a,b)<<endl;
		break;
	case 'cvhv':
		count << "chu vi hinh vuong: " << chuViHinhVuong(a) << endl;
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

float thuong(int a, int b){
	return a/b;
}


float chuvihcn(int dai, int rong)
{
		cout<<"nhap chieu dai:"<<endl;
		cin>>dai;
		cout<<"nhap chieu rong:"<<endl;
		cin>>rong;
		cout<<"chu vi hinh chu nhat la"<<(dai+rong)*2;
		
}

float chuViHinhTron(int a){
	return 2*3.14*a;
}

int chuViHinhVuong(int a) {
	return a*4;
}
