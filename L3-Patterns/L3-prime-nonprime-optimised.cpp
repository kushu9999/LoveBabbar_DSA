#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    bool isprime = true;

    if(n==0 || n==1)
    {
        isprime = false;
        // 0 and 1 are non prime numbers
    }
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            isprime = false;
            break;
        }
        
    }
    if(isprime)
    {
        cout<<"It is prime number \n";
    }
    else
    {
        cout<<"Not Prime";
    }

    
    return 0;
}