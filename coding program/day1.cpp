#include<iostream>
#include<iomanip>
#include<limits>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{	int i=4;
	float d=4.0;
	string s="HackerRank ";
	
    // Declare second integer, double, and String variables.
    int a;
    double b;
    string line;

    // Read and save an integer, double, and String to your variables.
    cout<<"Enter int ";
	cin>>a;
	cout<<"Enter float ";
    cin>>b;
    cout<<"Enter string ";
    cin.ignore();//for getline to take value
	getline(cin,line);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    // Print the sum of both integer variables on a new line.
    cout<<a+i<<endl;
    // Print the sum of the double variables on a new line.
    cout<<fixed<<showpoint;//for decimal setwidth
    cout<<setprecision(1);
    cout<<b+d<<endl;
   // Concatenate and print the String variables on a new line
    cout<<s<<line;
    // The 's' variable above should be printed first.
    return 0;
}   
