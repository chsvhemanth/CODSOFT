/*program of a simple calculator which does
addition,subtraction,multiplication,division of two numbers*/

#include<iostream>
using namespace std;
int main (){
  int  a,b;
  char op;
  cout<<"welcome to simple calculator"<<endl;
  cout<<"enter the two values"<<endl;
  cin>>a>>b;
  cout<<" + -> addition"<<endl;
  cout<<" - -> subtraction"<<endl;
  cout<<" * -> multiplication"<<endl;
  cout<<" / -> division"<<endl;
  cout<<"choose the arithmetic operation"<<endl;
  cin>>op;

  switch (op){

  case '+' : cout<<"sum of" <<a<<"and"<<b<<"is "<<a+b<<endl;
              break;
  case '-' :cout<<"Difference of" <<a<<"and"<<b<<"is "<<a-b<<endl;
             break;
  case '*' : cout<<"product of" <<a<<"and"<<b<<"is "<<a*b<<endl;
            break;
  case '/' : cout<<"The value of" <<a<<"/"<<b<<"is "<<(float)a/b<<endl;
            break;
  default : cout<<"operator out of range"<<endl;
            cout<<"choose correct operator"<<endl;
  }
  cout<<"THANKS! For Using Simple Calculator"<<endl;
return 0;
}
