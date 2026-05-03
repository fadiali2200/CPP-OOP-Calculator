#include<iostream>
using namespace std;
class calculator{
	private:
		double num1,num2;
	public:
		void getinput(){
			cout<<"enter first number"<<endl;
	cin>>num1;
	cout<<"enter the second number"<<endl;
	cin>>num2;

		}
	void calculate(){
			char opchoice;
		cout<<"enter operator"<<endl;
	cin>>opchoice;
	
	
	 if (opchoice=='-')
	{
		cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
		
	}
	else if (opchoice=='+')
	{
		cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
	}
	else if(opchoice=='*')
	{
		cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
		
	}
	else if(opchoice=='/') {
    if(num2 != 0) {
        cout << num1 << " / " << num2 << " = " << (float)num1 / num2 << endl;
    } else {
        cout << "Error: Division by zero is not allowed!" << endl;
    }
}
	else 
	{
		cout<<"error"<<endl;
	}
}
};
int main()
{
	calculator c;
	c.getinput();
	c.calculate();
	return 0;
}
