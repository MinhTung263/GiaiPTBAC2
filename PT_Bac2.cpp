#include <iostream>
#include <cmath>
using namespace std;

class PhuongTrinhBacHai{
	private:
		float a,b,c,delta,x1,x2;
	public :
		void Nhap(){
			cout<<"Phuong trinh ax2+bx+c=0\n";
			cout<<"Nhap a= ";
			cin>>a;
			cout<<"Nhap b= ";
			cin>>b;
			cout<<"Nhap c= ";
			cin>>c;
		}
		void HienThi(){
			cout<<"\nHe phuong trinh vua nhap la: ";
			cout<<a<<"x2 + "<<b<<"x + "<<c<<" = 0";
			cout<<endl;
		}
		void GiaiHe(){
			
			if(a!=0){
				delta=b*b-4*a*c;
				if(delta>0){
					cout<<"Phuong trinh co 2 nghiem phan biet:\n";
					x1=(-b-sqrt(delta))/2*a;
					x2=(-b+sqrt(delta))/2*a;
					cout<<"x1= "<<x1<<" x2= "<<x2;
				}
				else if(delta==0){
					cout<<"Phuong trinh co nghiem kep x1=x2= "<<-b/2*a;
				}else{
					cout<<"Phuong trinh vo nghiem!";
				}
			}else{
				cout<<"Phuong trinh vua nhap khong phai la phuong trinh bac 2";
			}
		}
			
};
int main(){
	PhuongTrinhBacHai pt;
	pt.Nhap();
	pt.HienThi();
	pt.GiaiHe();
}
