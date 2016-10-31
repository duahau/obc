#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class DaGiac{
	
	public:
	  
	  DaGiac();
	  float ChuVi();
	  void InTT(); 
	protected:
	  int n;
	  float *a;   	
};
DaGiac::DaGiac(){
	/*cout<<"\nNhap so canh:"; cin>>n;
	a = new float[n];
	for(int i=0 ; i<n ;i++){
		cout<<"\nNhap canh thu "<<i+1<<" : ";
		cin>>a[i];
	}*/
}
float DaGiac::ChuVi(){
	float Tong = 0;
	for(int i = 1; i<n; i++){
	 Tong = Tong +a[i];}
	cout<<"\nChu vi la:"<<Tong<<endl; 
}
void DaGiac::InTT(){
	for(int i=0; i<n; i++)
	cout<<"\nDo dai canh"<<i+1<<" : "<<a[i]<<endl;
}
class TamGiac:DaGiac{
	public:
		void DaGiac();
		float ChuVi();
		void InTT();
		void DienTich();
};
void TamGiac::DaGiac(){
	n = 3;
	a = new float[n];
	cout<<"\n--------------NHAP CANH TAM GIAC-------------"<<endl;
	for(int i = 0; i<n; i++){
	cout<<"\n|  +Nhap canh thu "<<i+1<<" : ";
	cin>>a[i];
}}
float TamGiac::ChuVi(){
	float Tong = 0;
	for(int i = 0; i<n; i++){
	 Tong = Tong +a[i];}
	cout<<"\n|   +Chu vi la : "<<Tong<<endl;
}
void TamGiac::InTT(){
	cout<<"\n------------IN THONG TIN TAM GIAC-------------"<<endl;
	for(int i=0; i<n; i++)
	cout<<"\n|   +Do dai canh "<<i+1<<" : "<<a[i]<<endl;
}
void TamGiac::DienTich(){
	float p;
    p = (a[0]+a[1]+a[2])/2;
    cout<<"\n|   +P = "<<p<<endl;
	cout<<"\n|   +Dien tich : "<<sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]));
}
int main()
{
	TamGiac t1;
	t1.DaGiac();
	t1.InTT();
	cout<<"\n------------CHU VI - DIEN TICH-------------"<<endl;
	t1.ChuVi();	
	t1.DienTich();
	return 0;
}


