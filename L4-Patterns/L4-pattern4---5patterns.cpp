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
        int j=1;
        int countt = i;
        while(j<=i)
        {
            
            // cout<<"*";
            // cout<<i;
            // cout<<count;
            // coutt<<countt;
            cout<<i+j-1;


            // countt += 1;
            // count += 1;
            j += 1;
        }
        cout<<endl;
        i +=1;
    }
    return 0;
}

// example n = 5
// o/p :- 
// *
// **
// ***
// ****
// *****

// example n = 5
// o/p :- 
// 1
// 22
// 333
// 4444
// 55555

// example n = 5
// o/p :- 
// 1
// 23
// 456
// 78910
// 1112131415

// example n = 5
// o/p :- 
// 1
// 23
// 345
// 4567
// 56789

// example n = 5
// o/p :- 
// 1
// 23
// 345
// 4567
// 56789