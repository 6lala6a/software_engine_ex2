#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        double a;
        cin>>a;
        char c;
        if(a>=85) c='A';
        else if(a>=75) c='B';
        else if(a>=65) c='C';
        else if(a>=50) c='D';
        else c='F';
        cout<<c<<endl;
    }
    return 0;
}