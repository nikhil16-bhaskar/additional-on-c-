#include<iostream>
using namespace std;
class TRIANGLE
{
	public:
	TRIANGLE(double h, double b)
	{
cout<<"area of triangle="<<0.5*h*b<<endl;
	}
	friend class shape;
};

class RECTANGLE
{
	RECTANGLE(double l, double B)
	{
		cout<<"area of reactangle="<<l*B<<endl;
	}
	friend class shape;
};

class shape
{
	float h,b,l,B;
public:
	void get()
	{
	cout<<"enter height and base of triangle=";
	cin>>h>>b;
	cout<<"enter length and breadth of rectangle=";
		cin>>l>>B;
	}
	void display()
	{
		TRIANGLE(h,b);
	RECTANGLE(l,B);
	}
	friend class TRIANGLE;
	friend class RECTANGLE;
};

int main()
{
shape obj;
obj.get();
obj.display();
}
