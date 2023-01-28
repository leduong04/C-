//1. In cac so nguyen tu a den b
//2. Kiem tra xem a, b co phai so nguyen to cung nhau khong?
//3. Tinh tong N so dau tien day so thuc A
//4. sap xep N phan tu dau tien cua day so nguyen A
//5. Tim vi tri cua phan tu co gia tri nho nhat trong day A
//6. Sinh ra mot chuoi ngau nhien
#include<iostream>
#include<algorithm> 
#include <cstdlib>
#include <ctime>
//#include<stdio.h>
using namespace std;

//1. In cac so nguyen tu a den b

void insonguyen(int a, int b)
{
	int i;
	cout << "In cac so nguyen tu a den b\nDay A: ";
	for(i=a; i<=b; i++)
	{
		cout << i <<"; ";
	}
}

//2. Kiem tra xem a, b co phai so nguyen to cung nhau khong?

void coprime(int a, int b)
{
	int i;
	int ktra = 1;
	for(i=2; i<=a; i++)
	{
		if(a%i==0 && b%i==0)
		{
			ktra = 0;
		}
	}
	if(ktra == 1)
	cout<<"\na va b la 2 so nguyen to cung nhau";
	if(ktra == 0)
	cout<<"\na va b khong phai 2 so nguyen to cung nhau";
}

//3.Tinh tong N so dau tien day so a, b.

void sumofNnumbers(int n, int a, int b)
{
	int i;
	int j=0;
	int k=0;
	for(i=a; i<=b; i++)
	{
		j++;
//		cout<<"\n"<<j;
		if(j<=n)
		{
			k+=i;
		}
		else
		break;
	}
	
	cout<<"\nTong N so dau tien cua day a va b: "<<k;
}
void sapxep(float a[], int k);
void minA(float a[], int k);

//Tinh tong K so dau tien cua day A;

void TongKsocuadayA(int m, int g)
{
	int i, j, k, l, p, x; 
	float a[1000];
	float s=0;
	cout<<"\n\nK = ";
	cin>>k;
	
	for(i=1; i<=k; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>> a[i];
	}
	cout<<"Day A: ";
	for(i=1; i<=k; i++)
	{
		cout<<a[i]<<"; ";
	}
	
	cout<<"\nP = ";
	cin>>p;
	for(i=1; i<=p; i++)
	{
		s+=a[i];
	}
	cout<<"Tong cua "<<p<<" so dau tien cua day A = "<<s;
	sapxep(a, k); 
	minA(a, k);
	
}

//Sap xep X so dau tien cua day A

void sapxep(float a[], int k)
{
	
	int x;
	int i; 
	
	cout<<"\nX = ";
	cin>>x; 
	sort(a, a+x+1);
	cout <<"Sap sep X so dau tien cua day A: ";
	for(i=1; i<=k; i++)
	{
		cout<<a[i]<<"; ";
	}
}

//Vi tri cua phan tu nho nhat cua day A

void minA(float a[], int k)
{
	float min = a[1];
	int I;
	int i;
	for(i=1; i<=k; i++)
	{
		if(a[i]<=min)
		{
			I=i;
		}
	}
	cout<<"\nVi tri phan tu nho nhat cua day A la: "<<I;
}

// In ra mot chuoi ngau nhien

int random()
{
	srand(time(NULL));
    int res = rand() % (100 - 3 + 1) + 3;  
    cout<<"\n\nChuoi ngau nhien: ";
	for(int i; i<=res; i++)
	{
	int a=rand()%(254-1+1)+1;
	cout << char(a);
	}
}
int main()
{
	int a, b, n;
	int m, g,z;
	cout<<"a = ";
	cin >>a;
	cout <<"b = ";
	cin >>b;
	cout <<"N = ";
	cin >>n;
	insonguyen(a, b);
	coprime(a, b);
	sumofNnumbers(n, a, b);
	TongKsocuadayA(m, g);
	 random();
}
