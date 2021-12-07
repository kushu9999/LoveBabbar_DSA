#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;

    while(i<n)
    {
        // divcide ho gaya to not prime
        if(n%i==0)
        {
            cout<<"Not Pirme for "<<i<<endl;
        }
        else
        {
            cout<<"Prime for "<<i<<endl;
        }
        i = i + 1;
    }
    return 0;
}