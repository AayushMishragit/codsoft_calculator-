#include<iostream>
using namespace std;
int main(){
	char arcal;//arcal stands for arithematical calulation
	int n1,n2;
	
	cin>>arcal;
	cout<<"enter two numbers:";
	cin>>n1>>n2;
	
	switch(arcal)
	{
		case '+':
		cout<<"Ans:"<<n1+n2;
		break;
			
	    case '-':
		cout<<"Ans:"<<n1-n2;
		break;
			
		case '*':
		cout<<"Ans:"<<n1*n2;
		break;
			
		case '/':
		cout<<"Ans:"<<n1/n2;
		break;
		
		case '%':
		cout<<"Ans:"<<n1%n2;
		break;	
		
		
		default:
	   	cout<<"Error!Detected";
	
	}
	
	   
	
	
}
