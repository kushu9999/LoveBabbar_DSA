#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<((n*(i-1))+j);
            j += 1;
        }
        cout<<endl;
        i +=1;
    }
    return 0;
}

// example n = 5
// o/p :- 
// 12345
// 678910
// 1112131415
// 1617181920
// 2122232425