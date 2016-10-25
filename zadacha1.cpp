#include <iostream>

using namespace std;

int main()
{
int num1,num2,num3,num4,num5;
cout<<"Enter five numbers:"<<endl;
cin>>num1>>num2>>num3>>num4>>num5;
if (num1>=num2 && num1>=num3 && num1>=num4 && num1>=num5) cout<<"The largest number is:"<<num1;
if (num2>=num1 && num2>=num3 && num2>=num4 && num2>=num5) cout<<"The largest number is:"<<num2;
if (num3>=num1 && num3>=num2 && num1>=num4 && num1>=num5) cout<<"The largest number is:"<<num3;
if (num4>=num2 && num4>=num3 && num4>=num1 && num4>=num5) cout<<"The largest number is:"<<num4;
if (num5>=num2 && num5>=num3 && num5>=num4 && num5>=num1) cout<<"The largest number is:"<<num5;
return 0;
}
