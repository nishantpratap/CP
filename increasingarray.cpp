#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

int main()
{
 
    ull n,pre,steps=0ull,in;
    cin>>n>>pre;
    while(--n)
    {
        cin>>in;
        if(pre>in)
        {
            steps += pre - in;
        }
        else 
        {
            pre = in;
        }
    }
    cout<< steps <<endl;
    return 0;
}