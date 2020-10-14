#include <iostream>
using namespace std;
int tong(int a, int b){
	int kq = 0;
	kq = a + b;
	return kq;
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
int dientichhcn(int a, int b){
	return a*b;
}
int dientichhv(int a){
	return pow(a,2);
}
int dientichht(int r){
	return 3,14 * pow(r,2);  // dien Pi * (ban kinh) ^ 2
}
float chuvihcn(int dai, int rong)
{	
	    int kq = ( dai + rong ) * 2;
		cout<<"chu vi hinh chu nhat la"<< kq ; // lan sau kg dc nhap xuat tham so truyen trong ham va khong dc cout trong ham.
		return kq;
}

float chuViHinhTron(int a){
	return 2*3.14*a;
}

int chuViHinhVuong(int a) {
	return a*4;
}

void luyenTapPhepCong() {
	int v1 = rand() % 100 + 1;
	int v2 = rand() % 100 + 1;
	int result;
	
	cout << "Tong " << v1 << "+" << v2 << "= ";
	cin >> result;
	if (v1 + v2 == result) {
		count << "Dap an chinh xac";
	} else {
		cout << "Dap an sai";
	}
}
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	int r;
	cout <<"Nhap ban kinh hinh tron" << endl;
	cout << "A o tren dong thoi la chieu dai hnc va canh hv. B la chieu rong hcn" << endl;
	cin >> r;
	cout << "Tinh gi? (+,-,*,/,cn,v,tron,cvhcn,cvhv,cvht) ";
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
	case 'cvhcn':
		count << "chu vi hinh chu nhat: " << chuvihcn(a, b) << endl;
		break;
	case 'cvhv':
		count << "chu vi hinh vuong: " << chuViHinhVuong(a) << endl;
		break;
	case 'cvht':
		count << "chu vi hinh tron: " << chuViHinhTron(r) << endl;
		break;
	case 'cn': 
		cout <<"Dien tich hinh cn la: " << dientichhcn(a,b) << " m^2 " << endl; 
		break;
	case 'v':
		cout <<"Dien tich hinh vuong la: " << dientichhv(a) << " m^2 " << endl; 
		break;
	case 'tron':
		cout <<"Dien tich hinh tron la: " << dientichhht(r) << " m^2 " << endl; 
		break;
	case 'ltpc'
		luyenTapPhepCong();
		break;
	default:
		cout << "Chon sai phep toan or sai hinh";
		break;	
	}
	return 0;
}
