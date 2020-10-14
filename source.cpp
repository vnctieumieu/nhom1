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
int dientichhcn(int a, int b){
	return a*b;
}
int dientichhv(int a){
	return pow(a,2);
}
int dientichht(int r){
	return 3,14 * pow(r,2);  // dien Pi * (ban kinh) ^ 2
}
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
	default:
		cout << "Chon sai phep toan";
		break;
	}
	int r;
	cout <<"Nhap ban kinh hinh tron" << endl;
	cout << "A o tren dong thoi la chieu dai hnc va canh hv. B la chieu rong hcn" << endl;
	cin >> r;
	char hinh;
	cout << "Hinh gi? ? (cn,v,tron) ";
	cin >> hinh;
	switch(hinh)
	{
		case 'cn': 
		cout <<"Dien tich hinh cn la: " << dientichhcn(a,b) << " m^2 " << endl; 
		break;
		case 'v':
		cout <<"Dien tich hinh vuong la: " << dientichhv(a) << " m^2 " << endl; 
		break;
		case 'tron':
		cout <<"Dien tich hinh tron la: " << dientichhht(r) << " m^2 " << endl; 
		break;
		default:
		cout << "Chon sai hinh";
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