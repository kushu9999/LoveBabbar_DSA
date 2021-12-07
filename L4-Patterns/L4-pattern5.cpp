#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    int count=1;
    while(i<=n)
    {
        int j=i;
        while(j>=1)
        {
            cout<<j--;
        }
        cout<<endl;
        i += 1;
    }
    return 0;

}

// example n = 5
// o/p :- 
// 1
// 21
// 321
// 4321
// 54321