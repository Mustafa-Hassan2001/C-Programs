#include<iostream>
#include<math.h>
using namespace std;
void operations(int a, int b, int c){
    
    // Your code here
    int power=0,xorr=0;
    power=pow(a,b);
    cout<<power<<endl;
    xorr=power^c;
    cout<<xorr<<endl;
    cout<<power%c;
    
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	operations(a,b,c);
}
