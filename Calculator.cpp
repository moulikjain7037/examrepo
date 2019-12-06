#include<iostream>
using namespace std;

int main()
{
int ch;
int sum=0,a,b;
cout<<"enter the option you want to select"<<endl;
cout<<"1. addition"<<endl;
cout<<"2. subtraction"<<endl;
cout<<"3. multiplication"<<endl;
cout<<"4. division"<<endl;
cin>>ch;

switch(ch)
{
	case 1:
	cout<<"*********addition******"<<endl;
	cout<<"enter the first value for addition"<<endl;
	cin>>a;
	cout<<"enter the second value for addition"<<endl;
    cin>>b;
	sum=a+b;
	cout<<"the sum is ="<<sum<<endl;
	break;

	case 2:
	cout<<"********subtraction******"<<endl;
        cout<<"enter the first value for subtraction"<<endl;
        cin>>a;
        cout<<"enter the second value for subtraction"<<endl;
        cin>>b;
        sum=a-b;
        cout<<"the sub is ="<<sum<<endl;

	break;

        case 3:
        cout<<"********division******"<<endl;
        cout<<"enter the first value for multiplication"<<endl;
        cin>>a;
        cout<<"enter the second value for multiplication"<<endl;
        cin>>b;
        sum=a*b;
        cout<<"the sub is ="<<sum<<endl;

        break;

        case 4:
        cout<<"********multiplication******"<<endl;
        cout<<"enter the first value for multiplication"<<endl;
        cin>>a;
        cout<<"enter the second value for multiplication"<<endl;
        cin>>b;
        sum=a*b;
        cout<<"the sub is ="<<sum<<endl;

        break;

        default:
        cout<<"not an option"<<endl;
}

return 0;
}