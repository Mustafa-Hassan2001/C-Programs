#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//code
	int t,sum=0,even=2,a;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    cin>>a;
	    for(int i=0; i<a ; i++)
	    {
	        sum+=pow(even,2);
	        even+=2;
	    }
	    cout<<sum<<endl;
	    sum=0;
	    even=2;
	}
	
	return 0;
}
