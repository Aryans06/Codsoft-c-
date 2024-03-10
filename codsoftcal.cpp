 #include<iostream>
using namespace std;

int main()
{
    cout<<"           WELCOME TO C++ CALCULATOR \n ";
    cout<<"Enter two numbers of your choice : ";
    float a,b;
    cin>>a>>b;
    char op;
    cout<<"Enter operator: +,-,*,/: ";
    cin>>op;

    switch (op)
    {
    case '+':
    cout<<a<<" + "<<b<< " = " <<a+b<<endl;
     break;

     case '-':
     cout<<a<<" - "<<b<< " = " <<a-b<<endl;
     break;

     case '*':
     cout<<a<<" * "<<b<< " = " <<a*b<<endl;
     break;

     case '/':
     cout<<a<<" / "<<b<< " = " <<a/b<<endl;
     break;

       
    
    default:
     cout<<"Error! the operator is not correct";

        break;
    }

    return  0;

    
}