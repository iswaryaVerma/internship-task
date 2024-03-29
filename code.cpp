#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int c;
    float d;
    char e;
    cout<<"Enter the value 1 : ";
    cin>>a;
    cout<<"Enter the value 2 : ";
    cin>>b;
    cout<<"Choose the operator : \n1. (+) \n2. (-)\n3. (*)\n4. (/) \nSelect: ";
    cin>>e;
    switch(e){
    case '+':{
        cout<<"\nThe addition of "<<a<<" and "<<b<<" is : "<<(a+b);
        break;
    }
    case '-':{
        c=(a-b);
        if(c<0){
            c=c*(-1);
        }
         cout<<"\nThe Subraction of "<<a<<" and "<<b<<" is : "<<c;
         break;
    }
    case '*':{
         cout<<"\nThe Multiplication of "<<a<<" and "<<b<<" is : "<<(a*b);
         break;
    }
    case '/':{
        d=a/b;
         cout<<"\nThe division of "<<a<<" and "<<b<<" is : "<<d;
         break;
    }
        default:
        {
            cout<<"Enter the Correct charecter \n \tInvalid Input";
        }
    }
return 0;
}