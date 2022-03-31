#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int disp(vector<string> B)
{
    for(int i=0;i<(B.size()-1);i++)
    {
        cout<<B[i];
    }
    return 0;
}

int meow(vector<string> A) 
{  
    int j=0;
    int k=0;
    vector<string> even;
    vector<string> odd;
    for(int i=0;i<(A.size()-1);i++) 
    {
        if( i==0 && i%2==0 )
        {
            even[j] = A[i];
            j++;
        }
        else
        {
            odd[k] = A[i];
            k++;
        }
    }
   disp(even);
    cout<<" ";
    disp(odd);
    cout<<endl;
   string STDOUT;
    STDOUT = (char*)&odd[0];
    cout<<STDOUT;
   return 0;
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<string> STDIN;
    int N=0;
    cin>>N;
    int a=0;
    string input;
    while(a<N)
    {
        cin>>input;
        STDIN.push_back(input);
        a++;
    }
    meow(STDIN); 
    return 0;
}

