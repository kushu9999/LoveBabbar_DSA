#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=n;
        while(j>=1)
        {
            cout<<j;
            j -= 1;
        }
        cout<<endl;
        i +=1;
    }
    return 0;
}

// example n = 5
// o/p :- 
// 54321
// 54321
// 54321
// 54321
// 54321