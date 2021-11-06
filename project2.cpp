#include<iostream>

using namespace std;

int main(){
	
	int sayi1,sayi2,a;
	
	cout<<"1.sayi gir:"<<endl;
	cin>>sayi1; 
	cout<<"2.sayi gir:"<<endl;
	cin>>sayi2;
	
	cout<<"Islem giriniz"<<endl;
	cout<<"1.toplama"<<endl;
	cout<<"2.carpma"<<endl;
	cout<<"3.bolme"<<endl;
	cout<<"4.cikarma"<<endl;
	cin>>a;
	
	
	
	if(a==1){
		cout<<sayi1+sayi2;
	}
	else if(a==2){
		cout<<sayi1*sayi2;
	}
	else if(a==3){
		cout<<sayi1/sayi2;
	}
	else if(a==4){
		cout<<sayi1-sayi2;
	}
	else{
		cout<<"1 ile 4 arasinda bir deger giriniz:"<<endl;
	}
	
	
	
	
	
}

