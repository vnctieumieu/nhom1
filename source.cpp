#include <iostream>
using namespace std;
#include<time.h>
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
	return (float)a/b;
}
int dientichhcn(int a, int b){
	return a*b;
}
int dientichhv(int a){
	return a * a;
}
int dientichht(int r){
	return 3,14 * r * r;  // dien Pi * (ban kinh) ^ 2
}
int chuvihcn(int dai, int rong)
{	
	    int kq = ( dai + rong ) * 2;
		return kq;
}

double chuViHinhTron(int a){
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
		cout << "Dap an chinh xac";
	} else {
		cout << "Dap an sai";
	}
}
void ltpt(){
	int v1 = rand() % 100 + 1;
	int v2 = rand() % 100 + 1;
	int result;

	cout << " Tru" << v1 << "-" << v2 << "= ";
	cin >> result;
	if (v1 - v2 == result) {
		cout << "Dap an chinh xac";
	}
	else {
		cout << "Dap an sai";
	}
}
int main()
{	
	cout << "Do nhom minh luoi :(( nen lam menu so so thoi cac ban thong cam Please!!!!" << endl;
	int option;
	cout << "1.bai toan so nguyen || 2. bai toan hinh hoc || 3. bai toan luyen tap " << endl;
	cin >> option;
	while (1)
	{
	switch (option)
	{
	case 1:
		cout << "ban da den voi bai toan so nguyen" << endl;
		int a, b;
		char phepToan;
		cout << "Nhap lan luot 2 so nguyen" << endl;
		cout << "Nhap so nguyen thu 1: ";
		cin >> a;
		cout << endl;
		cout << "Nhap so nguyen thu 2: ";
		cin >> b;
		cout << endl;
		cout << "Tinh gi? (+,-,*,/) ";
		cin >> phepToan;
		switch (phepToan)
		{
		case '+':
			cout << "Tong " << a << " & " << b << " = " << tong(a, b);
			break;
		case '-':
			cout << a << "-" << b << "= " << hieu(a, b) << endl;
			break;
		case '*':
			cout << a << " * " << b << " = " << tich(a, b) << endl;
			break;
		case '/':
			cout << a << " / " << b << " = " << thuong(a, b) << endl;
			break;
		default:
			cout << "Chon sai phep toan or sai hinh";
			break;
		}
		int op;
		cout << "Ban co muon quay lai bai toan so nguyen: 1. Co || 2. Ve Menu" << endl;
		cin >> op;
		if (op == 1)
			continue;
		else
			break;
		break;
	case 2:
		cout << "ban da den voi bai toan ve hinh hoc" << endl;
		cout << "Chon hinh hoc ban muon: 1. Hinh Chu Nhat | 2. Hinh Tron | 3. Hinh Vuong" << endl;
		int option;
		cin >> option;
		switch (option)
		{
		case 1: cout << "Cho toi xin info hinh chu nhat nao!" << endl;
			int cd, cr;
			cout << "Nhap chieu dai: ";
			cin >> cd;
			cout << endl;
			cout << "Nhap chieu rong: ";
			cin >> cr;
			cout << endl;
			cout << "Chu vi hinh chu nhat la: " << chuvihcn(cd, cr) << endl;
			cout << "Dien tich hinh chu nhat la:  " << dientichhcn(cd, cr) << endl;
			break;
		case 2: cout << "Cho toi xin info hinh tron nao!" << endl;
			int r, d;
			cout << "Nhap ban kinh: ";
			cin >> r;
			cout << endl;
			cout << "Chu vi hinh tron la: " << chuViHinhTron(r) << endl;
			cout << "Dien tich hinh tron la: " << dientichht(r) << endl;
			break;
		case 3: cout << "Cho toi xin info hinh vuong nao!" << endl;
			int a;
			cout << "Nhap do dai canh hinh vuong ";
			cin >> a;
			cout << endl;
			cout << "Chu vi hinh vuong la: " << chuViHinhVuong(a) << endl;
			cout << "Dien tich hinh vuong la:  " << dientichhv(a) << endl;
			break;
		default:
			break;
		}
		int op2;
		cout << "Ban co muon quay lai bai toan hinh hoc: 1. Co || 2. Ve Menu" << endl;
		cin >> op2;
		if (op2 == 1)
			continue;
		else
			break;
		break;
	case 3: 
	cout << "Ban da den voi bai toan luyen tap!" << endl;
	cout << "1. Luyen tap phep cong | 2. Luyen tap phep tru" << endl;
		int luachon;
		cin >> luachon;
		cout << endl;
		switch (luachon)
		{
			case 1: cout << "Luyen tap phep cong!! Hello" << endl;
			luyenTapPhepCong();
			break;
			case 2: cout << "Luyen tap phep tru!! Hello" << endl;
			ltpt();
			break;
			default:
			break;
		}
		int op3;
		cout << "Ban co muon quay lai bai toan luyen tap: 1. Co || 2. Ve Menu" << endl;
		cin >> op3;
		if (op3 == 1)
			continue;
		else
			break;
		break;
	default:
		break;
	}
	cout << "1.bai toan so nguyen || 2. bai toan hinh hoc || 3. bai toan luyen tap " << endl;
	cin >> option;
}
	return 0;
}
