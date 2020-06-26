#include<iostream>
#include<cmath>
using namespace std;

//clase that describes complex numbers
class Complex
{
	private: 
		double realpart;//stores realpart of number
		double imaginarypart;//stores imaginarypart of number
	public:
		Complex(double real=0.0,double imag=0.0)//default constructor
		{realpart=real;imaginarypart=imag;}
		bool operator==(const Complex&);
		void showcomplexvalues();//prints complex number
		void assignnewvalues(double real, double imag)//Assign new values to real and imaginary part
		{realpart=real;imaginarypart=imag;}
		Complex multScaler(double = 1.0);//multiplies realpart and imaginarypart vy numbers	
};
void Complex::showcomplexvalues()
{
	char sign = '+';//function that prints complex numbers
	if (imaginarypart<0)sign = '-';//first checks sign 
	cout << realpart << ' '<< sign << ' ' << abs(imaginarypart) << 'i';
}

Complex Complex::multScaler (double num)
{
	Complex temp;
	temp.realpart=realpart*num;
	temp.imaginarypart=imaginarypart*num;
	return temp;
}
	
	bool Complex::operator==(const Complex& complex1) 
	{
		if(realpart==complex1.realpart&&imaginarypart==complex1.imaginarypart)
			return true;
	}
int main(){
	Complex complexone(12.57,18.26), complextwo;//creates objects of type complex
	
	cout<<"The value assigned to complexone is: ";
	complexone.showcomplexvalues();//shows values of complexone
	complextwo=complexone.multScaler(10.0);//multiplies complex values by 10
	cout<<"\nThe value assigned to complextwo is: ";
	complextwo.showcomplexvalues();//shows values of complexone
	cout<<endl;
	if(complexone==complextwo)
		cout<<"The complex numbers are the same."<<endl;
		else
		cout<<"The complex numbers are not the same."<<endl;
	system("pause");
	return 0;
}


